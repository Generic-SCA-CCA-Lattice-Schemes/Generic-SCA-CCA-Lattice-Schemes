CC = /usr/bin/gcc -O3
LDFLAGS = -lcrypto

SOURCES = kem.c cpapke.c fips202.c ntt.c poly.c precomp.c reduce.c rng.c verify.c main.c
HEADERS = api.h cpapke.h fips202.h ntt.h params.h poly.h reduce.h rng.h verify.h

run_script: $(SOURCES) $(HEADERS)
	$(CC) $(SOURCES) -o $@ $(LDFLAGS)

.PHONY: help

help:
	@echo "You can run this script in three different ways:"
	@echo
	@echo "1) ./run_script generate_first_cts --- To Generate N initial random ciphertexts"
	@echo
	@echo "2) ./run_script compute_complexity --- Compute attacker's complexity... If you are happy with query complexity, then proceed to step 3, else rerun steps 1 and 2..."
	@echo
	@echo "3) ./run_script resolve_conflicts --- Generate ciphertexts to resolve conflicts among candidates..."
	@echo
	@echo "4) ./run_script run_attacks <NUMBER OF ATTACKS IN INTEGER> --- (e.g) To run attack 10 times on different keys, RUN ./run_script run_attacks 10 .... Once you have obtained all the required ciphertexts, then you can run many attacks based on the number input..."
	@echo "The correct secrets are stored in f_correct_secrets.dat while the retrieved secrets are stored in f_guessed_secrets.dat"
clean:
	-rm run_script
