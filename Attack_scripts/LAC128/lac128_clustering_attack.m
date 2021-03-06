clear; clc;

% parameters of the traces...

% Profiling the traces to find the differentiating Points of Interest between m = 0 and m = 1...

traces_ini = 50;
traces_final = 50;
trace_initial_point = 1;
trace_final_point = 50000;
trace_length = 50000;
traces_per_file = 50;
no_traces_used = 50;

first_set_start_index = 1; % start trace index used for profiling in trace set 1...
first_set_end_index = 50; % end trace index used for profiling in trace set 1...
second_set_start_index = 1; % start trace index used for profiling in trace set 1...
second_set_end_index = 50; % end trace index used for profiling in trace set 1...
fform_first = 'traces_50';
fform_second = 'traces_50';

disp('Calculating TVLA between m = 0 and m = 1...');

n = 0;
X=zeros(1,trace_length);
X2=zeros(1,trace_length);
path = sprintf('LAC_m_0_traces_profiling/');
ext='.mat';
for i=traces_ini:traces_per_file:traces_final
    fname=[path fform_first ext];
%     disp(['Reading ' fname]);
    load(fname);
    traces=double(traces(first_set_start_index:first_set_end_index,trace_initial_point:trace_final_point));
%                 % remove mean from each trace...
%                 for row_no = 1:1:size(traces,1)
%                     traces(row_no, :) = traces(row_no, :) - mean(traces(row_no, :));
%                 end
    X=X+sum(traces);
    X2=X2+sum(traces.^2);
    n=n+size(traces,1);
    clear traces scalars points;
end

m_X=X/n;
v_X=(X2-(X.^2/n))/(n-1);
v_Xn=v_X/n;

m_CKCP=m_X;
v_CKCP=abs(v_X);
v_CKCP_n=v_Xn;

n=0;
X=zeros(1,trace_length);
X2=zeros(1,trace_length);
path = sprintf('LAC_m_1_traces_profiling/');            
ext='.mat';
for i=traces_ini:traces_per_file:traces_final
    fname=[path fform_second ext];
%     disp(['Reading ' fname]);
    load(fname);
    traces=double(traces(second_set_start_index:second_set_end_index,trace_initial_point:trace_final_point));
%                 % remove mean from each trace...
%                 for row_no = 1:1:size(traces,1)
%                     traces(row_no, :) = traces(row_no, :) - mean(traces(row_no, :));
%                 end                
    X=X+sum(traces);
    X2=X2+sum(traces.^2);
    n=n+size(traces,1);
    clear traces scalars points;
end

m_X=X/n;
v_X=(X2-(X.^2/n))/(n-1);
v_Xn=v_X/n;

m_CKRP=m_X;
v_CKRP=abs(v_X);
v_CKRP_n=v_Xn;

tvla1= (m_CKRP-m_CKCP)./sqrt(v_CKCP/n+v_CKRP/n);

% figure;plot(tvla1,'color', [0,0,0]+0.7)
% hold on;
% plot([0,trace_length],[4.5,4.5],'k')
% plot([0,trace_length],[-4.5,-4.5],'k')
% xlabel('Time Samples')
% ylabel('TVLA Value')
% legend('TVLA-Set1-Set2','TVLA-PASS-FAIL-Threshold')

% Based on tvla value, we choose an appropriate threshold to test if we can
% find a nice clustering of the two classes m = 0 and m = 1...

disp('Computing cluster for two classes m = 0 and m = 1...');

threshold = 12; % choosing appropriate threshold...
leaky_points_no = 0;
for i = 1:1:trace_length
    if(tvla1(i) >= threshold)
        leaky_points_no = leaky_points_no+1;
    end
end

k = 1;
leaky_indices = zeros(1,leaky_points_no);
for i = 1:1:trace_length
    if(tvla1(i) >= threshold)
        leaky_indices(1,k) = i;
        k = k+1;
    end
end

% Taking mean of PoI in trace set 1 for all traces...

path = sprintf('LAC_m_0_traces_profiling/');
ext='.mat';
fname=[path fform_first ext];
% disp(['Reading ' fname]);
load(fname);
correct_traces=double(traces(:,trace_initial_point:trace_final_point));
% for row_no = 1:1:size(traces,1)
%     correct_traces(row_no, :) = correct_traces(row_no, :) - mean(correct_traces(row_no, :));
% end

means_correct = zeros(1,no_traces_used);
for i = 1:1:no_traces_used
    sum_points = 0;
    current_trace = correct_traces(i,:);
    for j = 1:1:leaky_points_no
        sum_points = sum_points+current_trace(leaky_indices(j));
    end
    means_correct(i) = sum_points/leaky_points_no;
end

% Taking mean of PoI in trace set 2 for all traces...

path = sprintf('LAC_m_1_traces_profiling/');            
ext='.mat';
fname=[path fform_second ext];
% disp(['Reading ' fname]);
load(fname);
faulty_traces=double(traces(:,trace_initial_point:trace_final_point));
% for row_no = 1:1:size(traces,1)
%     faulty_traces(row_no, :) = faulty_traces(row_no, :) - mean(faulty_traces(row_no, :));
% end

means_faulty = zeros(1,no_traces_used);
for i = 1:1:no_traces_used
    sum_points = 0;
    current_trace = faulty_traces(i,:);
    for j = 1:1:leaky_points_no
        sum_points = sum_points+current_trace(leaky_indices(j));
    end
    means_faulty(i) = sum_points/leaky_points_no;
end

% Figure of clustering of the two clusters...

% figure;
% hold on;
% plot(means_correct,'bo');
% plot(means_faulty,'ro');

% Calculating the threshold to classify traces during attack (m = 0 or m =
% 1)

disp('Performing attack to recover secret...');

faulty_mean = mean(means_faulty);
correct_mean = mean(means_correct);

attack_threshold = (faulty_mean+correct_mean)/2;

no_attack_files = 512; % Total number of coefficients...
no_attack_traces = 1024; % Five trials for each coefficient (512 * 2)
no_traces_in_file = 2;

means_attack = zeros(no_attack_files,no_traces_in_file);
means_label = zeros(no_attack_files,no_traces_in_file);

% Performing attack based on attack_threshold...

for i = 1:1:no_attack_files
    path = sprintf('LAC_attack_traces/spot_0_0/');
    fform = 'traces_';
    ext='.mat';
    trace_no = num2str(i*no_traces_in_file);
    fname=[path fform trace_no ext];
    load(fname);
    traces=double(traces(:,trace_initial_point:trace_final_point));
%     for row_no = 1:1:size(traces,1)
%         traces(row_no, :) = traces(row_no, :) - mean(traces(row_no, :));
%     end
    
    for k = 1:1:no_traces_in_file
        sum_points = 0;
        current_trace = traces(k,:);
        for j = 1:1:leaky_points_no
            sum_points = sum_points+current_trace(leaky_indices(j));
        end
        means_attack(i,k) = sum_points/leaky_points_no;
    end
    plot(means_attack(i,:))
end

for i = 1:1:no_attack_files
    for k = 1:1:no_traces_in_file
       if(means_attack(i,k) <= attack_threshold)
           means_label(i,k) = 0;
       else
           means_label(i,k) = 1;
       end
    end
end

s_coeff = ones(1,no_attack_files);

for i = 1:1:no_attack_files
    if(means_label(i,1) == 0 && means_label(i,2) == 0)
        s_coeff(1,i) = 0;
        continue;
    elseif(means_label(i,1) == 0 && means_label(i,2) == 1)
        s_coeff(1,i) = -1;
        continue;
    elseif(means_label(i,1) == 1 && means_label(i,2) == 0)
        s_coeff(1,i) = 1;
        continue;
    end
end

s_coeffs_actual = load('lacv2_s_coeffs.dat');

succ = 0;
for i = 1:1:no_attack_files
    if(i == 1)
        if(s_coeffs_actual(1,i) == s_coeff(1,i))
            succ = succ+1;
        end
    else
        if(s_coeffs_actual((512-(i-2)),1) == -1*s_coeff(1,i))
            succ = succ+1;
        end
    end
end

succ_rate = succ/no_attack_files





