/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrdecls_STM32F3 User interrupt service routines (ISR) defaults for STM32 F3 series
    @ingroup CM3_nvic_isrdecls

    @{*/

void nvic_wwdg_isr(void) __attribute__((weak, alias("blocking_handler")));
void pvd_isr(void) __attribute__((weak, alias("blocking_handler")));
void tamp_stamp_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc_wkup_isr(void) __attribute__((weak, alias("blocking_handler")));
void flash_isr(void) __attribute__((weak, alias("blocking_handler")));
void rcc_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti0_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti1_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti2_tsc_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti3_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti4_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel1_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel2_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel3_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel4_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel5_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel6_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_channel7_isr(void) __attribute__((weak, alias("blocking_handler")));
void adc1_2_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_hp_can1_tx_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_lp_can1_rx0_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_rx1_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_sce_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti9_5_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_brk_tim15_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_up_tim16_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_trg_com_tim17_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_cc_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim2_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim3_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim4_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c1_ev_exti23_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c1_er_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c2_ev_exti24_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c2_er_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi1_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi2_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart1_exti25_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart2_exti26_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart3_exti28_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti15_10_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc_alarm_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_wkup_a_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_brk_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_up_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_trg_com_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_cc_isr(void) __attribute__((weak, alias("blocking_handler")));
void adc3_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_1_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_2_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_3_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi3_isr(void) __attribute__((weak, alias("blocking_handler")));
void uart4_exti34_isr(void) __attribute__((weak, alias("blocking_handler")));
void uart5_exti35_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim6_dac_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim7_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_channel1_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_channel2_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_channel3_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_channel4_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_channel5_isr(void) __attribute__((weak, alias("blocking_handler")));
void eth_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_4_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_5_isr(void) __attribute__((weak, alias("blocking_handler")));
void comp123_isr(void) __attribute__((weak, alias("blocking_handler")));
void comp456_isr(void) __attribute__((weak, alias("blocking_handler")));
void comp7_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_master_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_tima_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_timb_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_timc_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_timd_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_time_isr(void) __attribute__((weak, alias("blocking_handler")));
void hrtim_flt_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_hp_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_lp_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_wkup_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_13_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_14_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_15_isr(void) __attribute__((weak, alias("blocking_handler")));
void reserved_16_isr(void) __attribute__((weak, alias("blocking_handler")));

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_NVIC_WWDG_IRQ] = nvic_wwdg_isr, \
    [NVIC_PVD_IRQ] = pvd_isr, \
    [NVIC_TAMP_STAMP_IRQ] = tamp_stamp_isr, \
    [NVIC_RTC_WKUP_IRQ] = rtc_wkup_isr, \
    [NVIC_FLASH_IRQ] = flash_isr, \
    [NVIC_RCC_IRQ] = rcc_isr, \
    [NVIC_EXTI0_IRQ] = exti0_isr, \
    [NVIC_EXTI1_IRQ] = exti1_isr, \
    [NVIC_EXTI2_TSC_IRQ] = exti2_tsc_isr, \
    [NVIC_EXTI3_IRQ] = exti3_isr, \
    [NVIC_EXTI4_IRQ] = exti4_isr, \
    [NVIC_DMA1_CHANNEL1_IRQ] = dma1_channel1_isr, \
    [NVIC_DMA1_CHANNEL2_IRQ] = dma1_channel2_isr, \
    [NVIC_DMA1_CHANNEL3_IRQ] = dma1_channel3_isr, \
    [NVIC_DMA1_CHANNEL4_IRQ] = dma1_channel4_isr, \
    [NVIC_DMA1_CHANNEL5_IRQ] = dma1_channel5_isr, \
    [NVIC_DMA1_CHANNEL6_IRQ] = dma1_channel6_isr, \
    [NVIC_DMA1_CHANNEL7_IRQ] = dma1_channel7_isr, \
    [NVIC_ADC1_2_IRQ] = adc1_2_isr, \
    [NVIC_USB_HP_CAN1_TX_IRQ] = usb_hp_can1_tx_isr, \
    [NVIC_USB_LP_CAN1_RX0_IRQ] = usb_lp_can1_rx0_isr, \
    [NVIC_CAN1_RX1_IRQ] = can1_rx1_isr, \
    [NVIC_CAN1_SCE_IRQ] = can1_sce_isr, \
    [NVIC_EXTI9_5_IRQ] = exti9_5_isr, \
    [NVIC_TIM1_BRK_TIM15_IRQ] = tim1_brk_tim15_isr, \
    [NVIC_TIM1_UP_TIM16_IRQ] = tim1_up_tim16_isr, \
    [NVIC_TIM1_TRG_COM_TIM17_IRQ] = tim1_trg_com_tim17_isr, \
    [NVIC_TIM1_CC_IRQ] = tim1_cc_isr, \
    [NVIC_TIM2_IRQ] = tim2_isr, \
    [NVIC_TIM3_IRQ] = tim3_isr, \
    [NVIC_TIM4_IRQ] = tim4_isr, \
    [NVIC_I2C1_EV_EXTI23_IRQ] = i2c1_ev_exti23_isr, \
    [NVIC_I2C1_ER_IRQ] = i2c1_er_isr, \
    [NVIC_I2C2_EV_EXTI24_IRQ] = i2c2_ev_exti24_isr, \
    [NVIC_I2C2_ER_IRQ] = i2c2_er_isr, \
    [NVIC_SPI1_IRQ] = spi1_isr, \
    [NVIC_SPI2_IRQ] = spi2_isr, \
    [NVIC_USART1_EXTI25_IRQ] = usart1_exti25_isr, \
    [NVIC_USART2_EXTI26_IRQ] = usart2_exti26_isr, \
    [NVIC_USART3_EXTI28_IRQ] = usart3_exti28_isr, \
    [NVIC_EXTI15_10_IRQ] = exti15_10_isr, \
    [NVIC_RTC_ALARM_IRQ] = rtc_alarm_isr, \
    [NVIC_USB_WKUP_A_IRQ] = usb_wkup_a_isr, \
    [NVIC_TIM8_BRK_IRQ] = tim8_brk_isr, \
    [NVIC_TIM8_UP_IRQ] = tim8_up_isr, \
    [NVIC_TIM8_TRG_COM_IRQ] = tim8_trg_com_isr, \
    [NVIC_TIM8_CC_IRQ] = tim8_cc_isr, \
    [NVIC_ADC3_IRQ] = adc3_isr, \
    [NVIC_RESERVED_1_IRQ] = reserved_1_isr, \
    [NVIC_RESERVED_2_IRQ] = reserved_2_isr, \
    [NVIC_RESERVED_3_IRQ] = reserved_3_isr, \
    [NVIC_SPI3_IRQ] = spi3_isr, \
    [NVIC_UART4_EXTI34_IRQ] = uart4_exti34_isr, \
    [NVIC_UART5_EXTI35_IRQ] = uart5_exti35_isr, \
    [NVIC_TIM6_DAC_IRQ] = tim6_dac_isr, \
    [NVIC_TIM7_IRQ] = tim7_isr, \
    [NVIC_DMA2_CHANNEL1_IRQ] = dma2_channel1_isr, \
    [NVIC_DMA2_CHANNEL2_IRQ] = dma2_channel2_isr, \
    [NVIC_DMA2_CHANNEL3_IRQ] = dma2_channel3_isr, \
    [NVIC_DMA2_CHANNEL4_IRQ] = dma2_channel4_isr, \
    [NVIC_DMA2_CHANNEL5_IRQ] = dma2_channel5_isr, \
    [NVIC_ETH_IRQ] = eth_isr, \
    [NVIC_RESERVED_4_IRQ] = reserved_4_isr, \
    [NVIC_RESERVED_5_IRQ] = reserved_5_isr, \
    [NVIC_COMP123_IRQ] = comp123_isr, \
    [NVIC_COMP456_IRQ] = comp456_isr, \
    [NVIC_COMP7_IRQ] = comp7_isr, \
    [NVIC_HRTIM_MASTER_IRQ] = hrtim_master_isr, \
    [NVIC_HRTIM_TIMA_IRQ] = hrtim_tima_isr, \
    [NVIC_HRTIM_TIMB_IRQ] = hrtim_timb_isr, \
    [NVIC_HRTIM_TIMC_IRQ] = hrtim_timc_isr, \
    [NVIC_HRTIM_TIMD_IRQ] = hrtim_timd_isr, \
    [NVIC_HRTIM_TIME_IRQ] = hrtim_time_isr, \
    [NVIC_HRTIM_FLT_IRQ] = hrtim_flt_isr, \
    [NVIC_USB_HP_IRQ] = usb_hp_isr, \
    [NVIC_USB_LP_IRQ] = usb_lp_isr, \
    [NVIC_USB_WKUP_IRQ] = usb_wkup_isr, \
    [NVIC_RESERVED_13_IRQ] = reserved_13_isr, \
    [NVIC_RESERVED_14_IRQ] = reserved_14_isr, \
    [NVIC_RESERVED_15_IRQ] = reserved_15_isr, \
    [NVIC_RESERVED_16_IRQ] = reserved_16_isr
