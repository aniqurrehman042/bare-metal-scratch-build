#include <stdint.h>

#define SRAM_START  0x20000000U
#define SRAM_SIZE   40 * 1024
#define SRAM_END    SRAM_START + SRAM_SIZE

#define STACK_START SRAM_END

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

int main();

void Reset_Handler();
void NMI_Handler()                    __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler()              __attribute__((weak, alias("Default_Handler")));
void MemManage_Handler()              __attribute__((weak, alias("Default_Handler")));
void BusFault_Handler()               __attribute__((weak, alias("Default_Handler")));
void UsageFault_Handler()             __attribute__((weak, alias("Default_Handler")));
void SVC_Handler()                    __attribute__((weak, alias("Default_Handler")));
void DebugMon_Handler()               __attribute__((weak, alias("Default_Handler")));
void PendSV_Handler()                 __attribute__((weak, alias("Default_Handler")));
void SysTick_Handler()                __attribute__((weak, alias("Default_Handler")));
void WWDG_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void PVD_IRQHandler()                 __attribute__((weak, alias("Default_Handler")));
void TAMP_STAMP_IRQHandler()          __attribute__((weak, alias("Default_Handler")));
void RTC_WKUP_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void FLASH_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void RCC_IRQHandler()                 __attribute__((weak, alias("Default_Handler")));
void EXTI0_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void EXTI1_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void EXTI2_TSC_IRQHandler()           __attribute__((weak, alias("Default_Handler")));
void EXTI3_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void EXTI4_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void DMA1_CH1_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH2_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH3_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH4_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH5_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH6_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA1_CH7_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void ADC1_2_IRQHandler()              __attribute__((weak, alias("Default_Handler")));
void USB_HP_CAN_TX_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void USB_LP_CAN_RX0_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
void CAN_RX1_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void CAN_SCE_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void EXTI9_5_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void TIM1_BRK_TIM15_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
void TIM1_UP_TIM16_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void TIM1_TRG_COM_TIM17_IRQHandler()  __attribute__((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void TIM2_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void TIM3_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void TIM4_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void I2C1_EV_EXTI23_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
void I2C1_ER_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void I2C2_EV_EXTI24_IRQHandler()      __attribute__((weak, alias("Default_Handler")));
void I2C2_ER_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void SPI1_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void SPI2_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void USART1_EXTI25_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void USART2_EXTI26_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void USART3_EXTI28_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void EXTI15_10_IRQHandler()           __attribute__((weak, alias("Default_Handler")));
void RTCAlarm_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void USB_WKUP_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void TIM8_BRK_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void TIM8_UP_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void TIM8_TRG_COM_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
void TIM8_CC_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void ADC3_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void FMC_IRQHandler()                 __attribute__((weak, alias("Default_Handler")));
void SPI3_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void UART4_EXTI34_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
void UART5_EXTI35_IRQHandler()        __attribute__((weak, alias("Default_Handler")));
void TIM6_DACUNDER_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void TIM7_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void DMA2_CH1_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA2_CH2_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA2_CH3_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA2_CH4_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void DMA2_CH5_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void ADC4_IRQHandler()                __attribute__((weak, alias("Default_Handler")));
void COMP123_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void COMP456_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void COMP7_IRQHandler()               __attribute__((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler()             __attribute__((weak, alias("Default_Handler")));
void USB_HP_IRQHandler()              __attribute__((weak, alias("Default_Handler")));
void USB_LP_IRQHandler()              __attribute__((weak, alias("Default_Handler")));
void USB_WKUP_EXTI_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void TIM20_BRK_IRQHandler()           __attribute__((weak, alias("Default_Handler")));
void TIM20_UP_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void TIM20_TRG_COM_IRQHandler()       __attribute__((weak, alias("Default_Handler")));
void TIM20_CC_IRQHandler()            __attribute__((weak, alias("Default_Handler")));
void FPU_IRQHandler()                 __attribute__((weak, alias("Default_Handler")));
void SPI4_IRQHandler()                  __attribute__((weak, alias("Default_Handler")));

uint32_t vectors[] __attribute__((section(".isr_vector"))) = {
    STACK_START,
    (uint32_t)Reset_Handler,
    (uint32_t)NMI_Handler,
    (uint32_t)HardFault_Handler,
    (uint32_t)MemManage_Handler,
    (uint32_t)BusFault_Handler,
    (uint32_t)UsageFault_Handler,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)SVC_Handler,
    (uint32_t)DebugMon_Handler,
    (uint32_t)0,
    (uint32_t)PendSV_Handler,
    (uint32_t)SysTick_Handler,
    (uint32_t)WWDG_IRQHandler,
    (uint32_t)PVD_IRQHandler,
    (uint32_t)TAMP_STAMP_IRQHandler,
    (uint32_t)RTC_WKUP_IRQHandler,
    (uint32_t)FLASH_IRQHandler,
    (uint32_t)RCC_IRQHandler,
    (uint32_t)EXTI0_IRQHandler,
    (uint32_t)EXTI1_IRQHandler,
    (uint32_t)EXTI2_TSC_IRQHandler,
    (uint32_t)EXTI3_IRQHandler,
    (uint32_t)EXTI4_IRQHandler,
    (uint32_t)DMA1_CH1_IRQHandler,
    (uint32_t)DMA1_CH2_IRQHandler,
    (uint32_t)DMA1_CH3_IRQHandler,
    (uint32_t)DMA1_CH4_IRQHandler,
    (uint32_t)DMA1_CH5_IRQHandler,
    (uint32_t)DMA1_CH6_IRQHandler,
    (uint32_t)DMA1_CH7_IRQHandler,
    (uint32_t)ADC1_2_IRQHandler,
    (uint32_t)USB_HP_CAN_TX_IRQHandler,
    (uint32_t)USB_LP_CAN_RX0_IRQHandler,
    (uint32_t)CAN_RX1_IRQHandler,
    (uint32_t)CAN_SCE_IRQHandler,
    (uint32_t)EXTI9_5_IRQHandler,
    (uint32_t)TIM1_BRK_TIM15_IRQHandler,
    (uint32_t)TIM1_UP_TIM16_IRQHandler,
    (uint32_t)TIM1_TRG_COM_TIM17_IRQHandler,
    (uint32_t)TIM1_CC_IRQHandler,
    (uint32_t)TIM2_IRQHandler,
    (uint32_t)TIM3_IRQHandler,
    (uint32_t)TIM4_IRQHandler,
    (uint32_t)I2C1_EV_EXTI23_IRQHandler,
    (uint32_t)I2C1_ER_IRQHandler,
    (uint32_t)I2C2_EV_EXTI24_IRQHandler,
    (uint32_t)I2C2_ER_IRQHandler,
    (uint32_t)SPI1_IRQHandler,
    (uint32_t)SPI2_IRQHandler,
    (uint32_t)USART1_EXTI25_IRQHandler,
    (uint32_t)USART2_EXTI26_IRQHandler,
    (uint32_t)USART3_EXTI28_IRQHandler,
    (uint32_t)EXTI15_10_IRQHandler,
    (uint32_t)RTCAlarm_IRQHandler,
    (uint32_t)USB_WKUP_IRQHandler,
    (uint32_t)TIM8_BRK_IRQHandler,
    (uint32_t)TIM8_UP_IRQHandler,
    (uint32_t)TIM8_TRG_COM_IRQHandler,
    (uint32_t)TIM8_CC_IRQHandler,
    (uint32_t)ADC3_IRQHandler,
    (uint32_t)FMC_IRQHandler,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)SPI3_IRQHandler,
    (uint32_t)UART4_EXTI34_IRQHandler,
    (uint32_t)UART5_EXTI35_IRQHandler,
    (uint32_t)TIM6_DACUNDER_IRQHandler,
    (uint32_t)TIM7_IRQHandler,
    (uint32_t)DMA2_CH1_IRQHandler,
    (uint32_t)DMA2_CH2_IRQHandler,
    (uint32_t)DMA2_CH3_IRQHandler,
    (uint32_t)DMA2_CH4_IRQHandler,
    (uint32_t)DMA2_CH5_IRQHandler,
    (uint32_t)ADC4_IRQHandler,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)COMP123_IRQHandler,
    (uint32_t)COMP456_IRQHandler,
    (uint32_t)COMP7_IRQHandler,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)I2C3_EV_IRQHandler,
    (uint32_t)I2C3_ER_IRQHandler,
    (uint32_t)USB_HP_IRQHandler,
    (uint32_t)USB_LP_IRQHandler,
    (uint32_t)USB_WKUP_EXTI_IRQHandler,
    (uint32_t)TIM20_BRK_IRQHandler,
    (uint32_t)TIM20_UP_IRQHandler,
    (uint32_t)TIM20_TRG_COM_IRQHandler,
    (uint32_t)TIM20_CC_IRQHandler,
    (uint32_t)FPU_IRQHandler,
    (uint32_t)0,
    (uint32_t)0,
    (uint32_t)SPI4_IRQHandler
};

void Default_Handler()
{
    while(1);
}

void Reset_Handler()
{
    // Copy .data section to SRAM
    uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;

    uint8_t* pDst = (uint8_t*)&_edata;
    uint8_t* pSrc = (uint8_t*)&_etext;

    for (int i = 0; i < size; i++)
    {
        *pDst++ = *pSrc++;
    }

    // Initialize the .bss section to 0 in SRAM
    size = (uint32_t)&_ebss - (uint32_t)&_sbss;
    pDst = (uint8_t*)&_sbss;

    for (int i = 0; i < size; i++)
    {
        *pDst++ = 0;
    }

    // Call the init function of the standard library (only needed is using standard library)

    // Call the main function
    main();
}
