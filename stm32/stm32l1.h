
/** CRC_DR - Data register */

/** CRC_DR - Data register */
#define CRC_DR_Data        (1 << 31)

/** CRC_IDR - Independent data register */

/** CRC_CR - Control register */
#define CRC_CR_RESET       (1 << 0)

/** PWR_CR - PWR power control register */
#define PWR_CR_LPRUN       (1 << 14)
#define PWR_CR_VOS         (1 << 12)
#define PWR_CR_FWU         (1 << 10)
#define PWR_CR_ULP         (1 << 9)
#define PWR_CR_DBP         (1 << 8)
#define PWR_CR_PLS         (1 << 7)
#define PWR_CR_PVDE        (1 << 4)
#define PWR_CR_CSBF        (1 << 3)
#define PWR_CR_CWUF        (1 << 2)
#define PWR_CR_PDDS        (1 << 1)
#define PWR_CR_LPSDSR      (1 << 0)

/** RCC_CR - Clock control register */
#define RCC_CR_RTCPRE      (1 << 30)
#define RCC_CR_CSSON       (1 << 28)
#define RCC_CR_PLLRDY      (1 << 25)
#define RCC_CR_PLLON       (1 << 24)
#define RCC_CR_HSEBYP      (1 << 18)
#define RCC_CR_HSERDY      (1 << 17)
#define RCC_CR_HSEON       (1 << 16)
#define RCC_CR_MSIRDY      (1 << 9)
#define RCC_CR_MSION       (1 << 8)
#define RCC_CR_HSIRDY      (1 << 1)
#define RCC_CR_HSION       (1 << 0)

/** RCC_ICSCR - Internal clock sources calibration register */
#define RCC_ICSCR_MSITRIM  (1 << 31)
#define RCC_ICSCR_MSICAL   (1 << 23)
#define RCC_ICSCR_MSIRANGE (1 << 15)
#define RCC_ICSCR_HSITRIM  (1 << 12)
#define RCC_ICSCR_HSICAL   (1 << 7)

/** RCC_CFGR - Clock configuration register */
#define RCC_CFGR_MCOPRE    (1 << 30)
#define RCC_CFGR_MCOSEL    (1 << 26)
#define RCC_CFGR_PLLDIV    (1 << 23)
#define RCC_CFGR_PLLMUL    (1 << 21)
#define RCC_CFGR_PLLSRC    (1 << 16)
#define RCC_CFGR_PPRE2     (1 << 13)
#define RCC_CFGR_PPRE1     (1 << 10)
#define RCC_CFGR_HPRE      (1 << 7)
#define RCC_CFGR_SWS       (1 << 3)
#define RCC_CFGR_SW        (1 << 1)

/** RCC_CIR - Clock interrupt register */
#define RCC_CIR_CSSC       (1 << 23)
#define RCC_CIR_LSECSSC    (1 << 22)
#define RCC_CIR_MSIRDYC    (1 << 21)
#define RCC_CIR_PLLRDYC    (1 << 20)
#define RCC_CIR_HSERDYC    (1 << 19)
#define RCC_CIR_HSIRDYC    (1 << 18)
#define RCC_CIR_LSERDYC    (1 << 17)
#define RCC_CIR_LSIRDYC    (1 << 16)
#define RCC_CIR_LSECSSIE   (1 << 14)
#define RCC_CIR_MSIRDYIE   (1 << 13)
#define RCC_CIR_PLLRDYIE   (1 << 12)
#define RCC_CIR_HSERDYIE   (1 << 11)
#define RCC_CIR_HSIRDYIE   (1 << 10)
#define RCC_CIR_LSERDYIE   (1 << 9)
#define RCC_CIR_LSIRDYIE   (1 << 8)
#define RCC_CIR_CSSF       (1 << 7)
#define RCC_CIR_LSECSSF    (1 << 6)
#define RCC_CIR_MSIRDYF    (1 << 5)
#define RCC_CIR_PLLRDYF    (1 << 4)
#define RCC_CIR_HSIRDYF    (1 << 2)
#define RCC_CIR_LSERDYF    (1 << 1)
#define RCC_CIR_LSIRDYF    (1 << 0)

/** RCC_AHBRSTR - AHB peripheral reset register */
#define RCC_AHBRSTR_FSMCRST (1 << 30)
#define RCC_AHBRSTR_AESRST (1 << 27)
#define RCC_AHBRSTR_DMA2RST (1 << 25)
#define RCC_AHBRSTR_DMA1RST (1 << 24)
#define RCC_AHBRSTR_FLITFRST (1 << 15)
#define RCC_AHBRSTR_CRCRST (1 << 12)
#define RCC_AHBRSTR_GPIOGRST (1 << 7)
#define RCC_AHBRSTR_GPIOFRST (1 << 6)
#define RCC_AHBRSTR_GPIOHRST (1 << 5)
#define RCC_AHBRSTR_GPIOERST (1 << 4)
#define RCC_AHBRSTR_GPIODRST (1 << 3)
#define RCC_AHBRSTR_GPIOCRST (1 << 2)
#define RCC_AHBRSTR_GPIOBRST (1 << 1)
#define RCC_AHBRSTR_GPIOARST (1 << 0)

/** RCC_APB2RSTR - APB2 peripheral reset register */
#define RCC_APB2RSTR_USART1RST (1 << 14)
#define RCC_APB2RSTR_SPI1RST (1 << 12)
#define RCC_APB2RSTR_SDIORST (1 << 11)
#define RCC_APB2RSTR_ADC1RST (1 << 9)
#define RCC_APB2RSTR_TIM11RST (1 << 4)
#define RCC_APB2RSTR_TIM10RST (1 << 3)
#define RCC_APB2RSTR_TIM9RST (1 << 2)
#define RCC_APB2RSTR_SYSCFGRST (1 << 0)

/** RCC_APB1RSTR - APB1 peripheral reset register */
#define RCC_APB1RSTR_COMPRST (1 << 31)
#define RCC_APB1RSTR_DACRST (1 << 29)
#define RCC_APB1RSTR_PWRRST (1 << 28)
#define RCC_APB1RSTR_USBRST (1 << 23)
#define RCC_APB1RSTR_I2C2RST (1 << 22)
#define RCC_APB1RSTR_I2C1RST (1 << 21)
#define RCC_APB1RSTR_UART5RST (1 << 20)
#define RCC_APB1RSTR_UART4RST (1 << 19)
#define RCC_APB1RSTR_USART3RST (1 << 18)
#define RCC_APB1RSTR_USART2RST (1 << 17)
#define RCC_APB1RSTR_SPI3RST (1 << 15)
#define RCC_APB1RSTR_SPI2RST (1 << 14)
#define RCC_APB1RSTR_WWDGRST (1 << 11)
#define RCC_APB1RSTR_LCDRST (1 << 9)
#define RCC_APB1RSTR_TIM7RST (1 << 5)
#define RCC_APB1RSTR_TIM6RST (1 << 4)
#define RCC_APB1RSTR_TIM5RST (1 << 3)
#define RCC_APB1RSTR_TIM4RST (1 << 2)
#define RCC_APB1RSTR_TIM3RST (1 << 1)
#define RCC_APB1RSTR_TIM2RST (1 << 0)

/** RCC_AHBENR - AHB peripheral clock enable register */
#define RCC_AHBENR_FSMCEN  (1 << 30)
#define RCC_AHBENR_AESEN   (1 << 27)
#define RCC_AHBENR_DMA2EN  (1 << 25)
#define RCC_AHBENR_DMA1EN  (1 << 24)
#define RCC_AHBENR_FLITFEN (1 << 15)
#define RCC_AHBENR_CRCEN   (1 << 12)
#define RCC_AHBENR_GPIOGEN (1 << 7)
#define RCC_AHBENR_GPIOFEN (1 << 6)
#define RCC_AHBENR_GPIOHEN (1 << 5)
#define RCC_AHBENR_GPIOEEN (1 << 4)
#define RCC_AHBENR_GPIODEN (1 << 3)
#define RCC_AHBENR_GPIOCEN (1 << 2)
#define RCC_AHBENR_GPIOBEN (1 << 1)
#define RCC_AHBENR_GPIOAEN (1 << 0)

/** RCC_APB2ENR - APB2 peripheral clock enable register */
#define RCC_APB2ENR_USART1EN (1 << 14)
#define RCC_APB2ENR_SPI1EN (1 << 12)
#define RCC_APB2ENR_SDIOEN (1 << 11)
#define RCC_APB2ENR_ADC1EN (1 << 9)
#define RCC_APB2ENR_TIM11EN (1 << 4)
#define RCC_APB2ENR_TIM10EN (1 << 3)
#define RCC_APB2ENR_TIM9EN (1 << 2)
#define RCC_APB2ENR_SYSCFGEN (1 << 0)

/** RCC_APB1ENR - APB1 peripheral clock enable register */
#define RCC_APB1ENR_COMPEN (1 << 31)
#define RCC_APB1ENR_DACEN  (1 << 29)
#define RCC_APB1ENR_PWREN  (1 << 28)
#define RCC_APB1ENR_USBEN  (1 << 23)
#define RCC_APB1ENR_I2C2EN (1 << 22)
#define RCC_APB1ENR_I2C1EN (1 << 21)
#define RCC_APB1ENR_UART5EN (1 << 20)
#define RCC_APB1ENR_UART4EN (1 << 19)
#define RCC_APB1ENR_USART3EN (1 << 18)
#define RCC_APB1ENR_USART2EN (1 << 17)
#define RCC_APB1ENR_SPI3EN (1 << 15)
#define RCC_APB1ENR_SPI2EN (1 << 14)
#define RCC_APB1ENR_WWDGEN (1 << 11)
#define RCC_APB1ENR_LCDEN  (1 << 9)
#define RCC_APB1ENR_TIM7EN (1 << 5)
#define RCC_APB1ENR_TIM6EN (1 << 4)
#define RCC_APB1ENR_TIM5EN (1 << 3)
#define RCC_APB1ENR_TIM4EN (1 << 2)
#define RCC_APB1ENR_TIM3EN (1 << 1)
#define RCC_APB1ENR_TIM2EN (1 << 0)

/** GPIOx_MODER - GPIO port mode register */

/** GPIOx_OTYPER - GPIO port output type register */
#define GPIOX_OTYPER_OTy   (1 << 15)

/** GPIOx_OSPEEDR - GPIO port output speed register */

/** GPIOx_IDR - GPIO port input data register */
#define GPIOX_IDR_IDRy     (1 << 15)

/** GPIOx_ODR - GPIO port output data register */
#define GPIOX_ODR_ODRy     (1 << 15)

/** GPIOx_LCKR - GPIO port configuration lock register */
#define GPIOX_LCKR_LCKy    (1 << 15)

/** GPIOx_AFRL - GPIO alternate function low register */
#define GPIOX_AFRL_AFRLy   (1 << 31)

/** GPIOx_AFRH - GPIO alternate function high register */
#define GPIOX_AFRH_AFRHy   (1 << 31)

/** RI_ICR - RI input capture register */
#define RI_ICR_IC4         (1 << 21)
#define RI_ICR_IC3         (1 << 20)
#define RI_ICR_IC2         (1 << 19)
#define RI_ICR_IC1         (1 << 18)
#define RI_ICR_TIM         (1 << 17)
#define RI_ICR_IC4IOS      (1 << 15)
#define RI_ICR_IC3IOS      (1 << 11)
#define RI_ICR_IC2IOS      (1 << 7)
#define RI_ICR_IC1IOS      (1 << 3)

/** RI_ASCR1 - RI analog switches control register */
#define RI_ASCR1_SCM       (1 << 31)
#define RI_ASCR1_VCOMP     (1 << 26)
#define RI_ASCR1_CH5       (1 << 5)
#define RI_ASCR1_CH4       (1 << 4)
#define RI_ASCR1_CH        (1 << 3)

/** RI_ASCR2 - RI analog switch control register 2 */

/** RI_HYSCR1 - RI hysteresis control register */
#define RI_HYSCR1_PB       (1 << 31)
#define RI_HYSCR1_PA       (1 << 15)

/** RI_HYSCR2 - RI Hysteresis control register */
#define RI_HYSCR2_PD       (1 << 31)
#define RI_HYSCR2_PC       (1 << 15)

/** RI_HYSCR3 - RI Hysteresis control register */
#define RI_HYSCR3_PF       (1 << 31)
#define RI_HYSCR3_PE       (1 << 15)

/** RI_HYSCR4 - RI Hysteresis control register */
#define RI_HYSCR4_PG       (1 << 15)

/** RI_ASMR1 - Analog switch mode register */

/** RI_CMR1 - Channel mask register */
#define RI_CMR1_PA         (1 << 15)

/** RI_CICR1 - Channel identification for capture register */
#define RI_CICR1_PA        (1 << 15)

/** RI_ASMR2 - Analog switch mode register */

/** RI_CMR2 - Channel mask register */

/** RI_CICR2 - Channel identification for capture register */
#define RI_CICR2_PB        (1 << 15)

/** RI_ASMR3 - Analog switch mode register */
#define RI_ASMR3_PC        (1 << 15)

/** RI_CMR3 - Channel mask register */

/** RI_CICR3 - Channel identification for capture register */

/** RI_ASMR4 - Analog switch mode register */
#define RI_ASMR4_PF        (1 << 15)

/** RI_CMR4 - Channel mask register */
#define RI_CMR4_PF         (1 << 15)

/** RI_CICR4 - Channel identification for capture register */

/** RI_ASMR5 - Analog switch mode register */

/** RI_CMR5 - Channel mask register */
#define RI_CMR5_PG         (1 << 15)

/** RI_CICR5 - Channel identification for capture register */
#define RI_CICR5_PG        (1 << 15)

/** SYSCFG_MEMRMP - SYSCFG memory remap register */
#define SYSCFG_MEMRMP_BOOT_MODE (1 << 9)
#define SYSCFG_MEMRMP_MEM_MODE (1 << 1)

/** SYSCFG_PMC - SYSCFG peripheral mode configuration register */
#define SYSCFG_PMC_LCD_CAPA (1 << 5)
#define SYSCFG_PMC_USB_PU  (1 << 0)

/** EXTI_IMR - EXTI interrupt mask register */
#define EXTI_IMR_MRx       (1 << 23)

/** EXTI_EMR - EXTI event mask register */
#define EXTI_EMR_MRx       (1 << 23)

/** EXTI_RTSR - EXTI rising edge trigger selection register */
#define EXTI_RTSR_TRx      (1 << 23)

/** EXTI_FTSR - Falling edge trigger selection register */
#define EXTI_FTSR_TRx      (1 << 23)

/** EXTI_SWIER - EXTI software interrupt event register */
#define EXTI_SWIER_SWIERx  (1 << 22)

/** EXTI_PR - EXTI pending register */
#define EXTI_PR_PRx        (1 << 23)

/** DMA_ISR - DMA interrupt status register */

/** DMA_IFCR - DMA interrupt flag clear register */

/** DMA_CCRx - DMA channel x configuration register */
#define DMA_CCRX_MEM2MEM   (1 << 14)
#define DMA_CCRX_PL        (1 << 13)
#define DMA_CCRX_MSIZE     (1 << 11)
#define DMA_CCRX_PSIZE     (1 << 9)
#define DMA_CCRX_MINC      (1 << 7)
#define DMA_CCRX_PINC      (1 << 6)
#define DMA_CCRX_CIRC      (1 << 5)
#define DMA_CCRX_DIR       (1 << 4)
#define DMA_CCRX_TEIE      (1 << 3)
#define DMA_CCRX_HTIE      (1 << 2)
#define DMA_CCRX_TCIE      (1 << 1)
#define DMA_CCRX_EN        (1 << 0)

/** DMA_CNDTRx - DMA channel x number of data register */
#define DMA_CNDTRX_NDT     (1 << 15)

/** DMA_CPARx - DMA channel x peripheral address register */
#define DMA_CPARX_PA       (1 << 31)

/** DMA_CMARx - DMA channel x memory address register */
#define DMA_CMARX_MA       (1 << 31)

/** ADC_SR - ADC status register */
#define ADC_SR_JCNR        (1 << 9)
#define ADC_SR_RCNR        (1 << 8)
#define ADC_SR_ADONS       (1 << 6)
#define ADC_SR_OVR         (1 << 5)
#define ADC_SR_STRT        (1 << 4)
#define ADC_SR_JSTRT       (1 << 3)
#define ADC_SR_JEOC        (1 << 2)
#define ADC_SR_EOC         (1 << 1)
#define ADC_SR_AWD         (1 << 0)

/** ADC_CR1 - ADC control register 1 */
#define ADC_CR1_OVRIE      (1 << 26)
#define ADC_CR1_RES        (1 << 25)
#define ADC_CR1_AWDEN      (1 << 23)
#define ADC_CR1_JAWDEN     (1 << 22)
#define ADC_CR1_PDI        (1 << 17)
#define ADC_CR1_PDD        (1 << 16)
#define ADC_CR1_DISCNUM    (1 << 15)
#define ADC_CR1_JDISCEN    (1 << 12)
#define ADC_CR1_DISCEN     (1 << 11)
#define ADC_CR1_JAUTO      (1 << 10)
#define ADC_CR1_AWDSGL     (1 << 9)
#define ADC_CR1_SCAN       (1 << 8)
#define ADC_CR1_JEOCIE     (1 << 7)
#define ADC_CR1_AWDIE      (1 << 6)
#define ADC_CR1_EOCIE      (1 << 5)
#define ADC_CR1_AWDCH      (1 << 4)

/** ADC_CR2 - ADC control register 2 */
#define ADC_CR2_SWSTART    (1 << 30)
#define ADC_CR2_EXTEN      (1 << 29)
#define ADC_CR2_EXTSEL     (1 << 27)
#define ADC_CR2_JSWSTART   (1 << 22)
#define ADC_CR2_JEXTEN     (1 << 21)
#define ADC_CR2_JEXTSEL    (1 << 19)
#define ADC_CR2_ALIGN      (1 << 11)
#define ADC_CR2_EOCS       (1 << 10)
#define ADC_CR2_DDS        (1 << 9)
#define ADC_CR2_DMA        (1 << 8)
#define ADC_CR2_DELS       (1 << 6)
#define ADC_CR2_ADC_CFG    (1 << 2)
#define ADC_CR2_CONT       (1 << 1)
#define ADC_CR2_ADON       (1 << 0)

/** ADC_SMPR1 - ADC sample time register 1 */
#define ADC_SMPR1_SMPx     (1 << 29)

/** ADC_SMPR2 - ADC sample time register 2 */
#define ADC_SMPR2_SMPx     (1 << 29)

/** ADC_SMPR3 - ADC sample time register 3 */
#define ADC_SMPR3_SMPx     (1 << 29)

/** ADC_HTR - ADC watchdog higher threshold register */
#define ADC_HTR_HT         (1 << 11)

/** ADC_LTR - ADC watchdog lower threshold register */
#define ADC_LTR_LT         (1 << 11)

/** ADC_SQR1 - ADC regular sequence register 1 */
#define ADC_SQR1_L         (1 << 24)
#define ADC_SQR1_SQ28      (1 << 19)
#define ADC_SQR1_SQ27      (1 << 14)
#define ADC_SQR1_SQ26      (1 << 9)
#define ADC_SQR1_SQ25      (1 << 4)

/** ADC_SQR2 - ADC regular sequence register 2 */
#define ADC_SQR2_SQ24      (1 << 29)
#define ADC_SQR2_SQ23      (1 << 24)
#define ADC_SQR2_SQ22      (1 << 19)
#define ADC_SQR2_SQ21      (1 << 14)
#define ADC_SQR2_SQ20      (1 << 9)
#define ADC_SQR2_SQ19      (1 << 4)

/** ADC_SQR3 - ADC regular sequence register 3 */
#define ADC_SQR3_SQ18      (1 << 29)
#define ADC_SQR3_SQ17      (1 << 24)
#define ADC_SQR3_SQ16      (1 << 19)
#define ADC_SQR3_SQ15      (1 << 14)
#define ADC_SQR3_SQ14      (1 << 9)
#define ADC_SQR3_SQ13      (1 << 4)

/** ADC_SQR4 - ADC regular sequence register 4 */
#define ADC_SQR4_SQ12      (1 << 29)
#define ADC_SQR4_SQ11      (1 << 24)
#define ADC_SQR4_SQ10      (1 << 19)
#define ADC_SQR4_SQ9       (1 << 14)
#define ADC_SQR4_SQ8       (1 << 9)
#define ADC_SQR4_SQ7       (1 << 4)

/** ADC_SQR5 - ADC regular sequence register 5 */
#define ADC_SQR5_SQ6       (1 << 29)
#define ADC_SQR5_SQ5       (1 << 24)
#define ADC_SQR5_SQ4       (1 << 19)
#define ADC_SQR5_SQ3       (1 << 14)
#define ADC_SQR5_SQ2       (1 << 9)
#define ADC_SQR5_SQ1       (1 << 4)

/** ADC_JSQR - ADC injected sequence register */
#define ADC_JSQR_JL        (1 << 21)
#define ADC_JSQR_JSQ4      (1 << 19)
#define ADC_JSQR_JSQ3      (1 << 14)
#define ADC_JSQR_JSQ2      (1 << 9)
#define ADC_JSQR_JSQ1      (1 << 4)

/** ADC_DR - ADC regular data register */
#define ADC_DR_DATA        (1 << 15)

/** ADC_SMPR0 - ADC sample time register 0 */
#define ADC_SMPR0_SMPx     (1 << 5)

/** ADC_CSR - ADC common status register */
#define ADC_CSR_ADONS1     (1 << 6)
#define ADC_CSR_OVR1       (1 << 5)
#define ADC_CSR_STRT1      (1 << 4)
#define ADC_CSR_JSTRT1     (1 << 3)
#define ADC_CSR_JEOC1      (1 << 2)
#define ADC_CSR_EOC1       (1 << 1)
#define ADC_CSR_AWD1       (1 << 0)

/** ADC_CCR - ADC common control register */
#define ADC_CCR_TSVREFE    (1 << 23)
#define ADC_CCR_ADCPRE     (1 << 17)

/** DAC_CR - DAC control register */
#define DAC_CR_DMAUDRIE2   (1 << 29)
#define DAC_CR_DMAEN2      (1 << 28)
#define DAC_CR_MAMP2       (1 << 27)
#define DAC_CR_WAVE2       (1 << 23)
#define DAC_CR_TSEL2       (1 << 21)
#define DAC_CR_TEN2        (1 << 18)
#define DAC_CR_BOFF2       (1 << 17)
#define DAC_CR_EN2         (1 << 16)
#define DAC_CR_DMAUDRIE1   (1 << 13)
#define DAC_CR_DMAEN1      (1 << 12)
#define DAC_CR_MAMP1       (1 << 11)
#define DAC_CR_WAVE1       (1 << 7)
#define DAC_CR_TSEL1       (1 << 5)
#define DAC_CR_TEN1        (1 << 2)
#define DAC_CR_BOFF1       (1 << 1)
#define DAC_CR_EN1         (1 << 0)

/** DAC_SWTRIGR - DAC software trigger register */
#define DAC_SWTRIGR_SWTRIG2 (1 << 1)
#define DAC_SWTRIGR_SWTRIG1 (1 << 0)

/** DAC_DOR1 - DAC channel1 data output register */
#define DAC_DOR1_DACC1DOR  (1 << 11)

/** DAC_DOR2 - DAC channel2 data output register */
#define DAC_DOR2_DACC2DOR  (1 << 11)

/** DAC_SR - DAC status register */
#define DAC_SR_DMAUDR2     (1 << 29)
#define DAC_SR_DMAUDR1     (1 << 13)

/** COMP_CSR - COMP comparator control and status register */
#define COMP_CSR_TSUSP     (1 << 31)
#define COMP_CSR_CAIF      (1 << 30)
#define COMP_CSR_CAIE      (1 << 29)
#define COMP_CSR_RCH13     (1 << 28)
#define COMP_CSR_FCH8      (1 << 27)
#define COMP_CSR_FCH3      (1 << 26)
#define COMP_CSR_OUTSEL    (1 << 23)
#define COMP_CSR_INSEL     (1 << 20)
#define COMP_CSR_WNDWE     (1 << 17)
#define COMP_CSR_VREFOUTEN (1 << 16)
#define COMP_CSR_CMP2OUT   (1 << 13)
#define COMP_CSR_SPEED     (1 << 12)
#define COMP_CSR_CMP1OUT   (1 << 7)
#define COMP_CSR_SW1       (1 << 5)
#define COMP_CSR_CMP1EN    (1 << 4)
#define COMP_CSR_400KPD    (1 << 3)
#define COMP_CSR_10KPD     (1 << 2)
#define COMP_CSR_400KPU    (1 << 1)
#define COMP_CSR_10KPU     (1 << 0)

/** LCD_CR - LCD control register */
#define LCD_CR_MUX_SEG     (1 << 7)
#define LCD_CR_BIAS        (1 << 6)
#define LCD_CR_DUTY        (1 << 4)
#define LCD_CR_VSEL        (1 << 1)
#define LCD_CR_LCDEN       (1 << 0)

/** LCD_FCR - LCD frame control register */
#define LCD_FCR_PS         (1 << 25)
#define LCD_FCR_DIV        (1 << 21)
#define LCD_FCR_BLINK      (1 << 17)
#define LCD_FCR_BLINKF     (1 << 15)
#define LCD_FCR_CC         (1 << 12)
#define LCD_FCR_DEAD       (1 << 9)
#define LCD_FCR_PON        (1 << 6)
#define LCD_FCR_UDDIE      (1 << 3)
#define LCD_FCR_SOFIE      (1 << 1)
#define LCD_FCR_HD         (1 << 0)

/** LCD_SR - LCD status register */
#define LCD_SR_FCRSF       (1 << 5)
#define LCD_SR_RDY         (1 << 4)
#define LCD_SR_UDD         (1 << 3)
#define LCD_SR_UDR         (1 << 2)
#define LCD_SR_SOF         (1 << 1)
#define LCD_SR_ENS         (1 << 0)

/** LCD_CLR - LCD clear register */
#define LCD_CLR_UDDC       (1 << 3)
#define LCD_CLR_SOFC       (1 << 1)

/** TIMx_CR1 - TIMx control register 1 */
#define TIMX_CR1_CKD       (1 << 9)
#define TIMX_CR1_ARPE      (1 << 7)
#define TIMX_CR1_CMS       (1 << 6)
#define TIMX_CR1_DIR       (1 << 4)
#define TIMX_CR1_OPM       (1 << 3)
#define TIMX_CR1_URS       (1 << 2)
#define TIMX_CR1_UDIS      (1 << 1)
#define TIMX_CR1_CEN       (1 << 0)

/** TIMx_CR2 - TIMx control register 2 */
#define TIMX_CR2_TI1S      (1 << 7)
#define TIMX_CR2_MMS       (1 << 6)
#define TIMX_CR2_CCDS      (1 << 3)

/** TIMx_SMCR - TIMx slave mode control register */
#define TIMX_SMCR_ETP      (1 << 15)
#define TIMX_SMCR_ECE      (1 << 14)
#define TIMX_SMCR_ETPS     (1 << 13)
#define TIMX_SMCR_ETF      (1 << 11)
#define TIMX_SMCR_MSM      (1 << 7)
#define TIMX_SMCR_TS       (1 << 6)
#define TIMX_SMCR_OCCS     (1 << 3)
#define TIMX_SMCR_SMS      (1 << 2)

/** TIMx_SR - TIMx status register */
#define TIMX_SR_CC4OF      (1 << 12)
#define TIMX_SR_CC3OF      (1 << 11)
#define TIMX_SR_CC2OF      (1 << 10)
#define TIMX_SR_CC1OF      (1 << 9)
#define TIMX_SR_TIF        (1 << 6)
#define TIMX_SR_CC4IF      (1 << 4)
#define TIMX_SR_CC3IF      (1 << 3)
#define TIMX_SR_CC2IF      (1 << 2)
#define TIMX_SR_CC1IF      (1 << 1)
#define TIMX_SR_UIF        (1 << 0)

/** TIMx_EGR - TIMx event generation register */
#define TIMX_EGR_TG        (1 << 6)
#define TIMX_EGR_CC4G      (1 << 4)
#define TIMX_EGR_CC3G      (1 << 3)
#define TIMX_EGR_CC2G      (1 << 2)
#define TIMX_EGR_CC1G      (1 << 1)
#define TIMX_EGR_UG        (1 << 0)

/** TIMx_DCR - TIMx DMA control register */
#define TIMX_DCR_DBL       (1 << 12)
#define TIMX_DCR_DBA       (1 << 4)

/** TIM2_OR - TIM2 option register */
#define TIM2_OR_ITR1_RMP   (1 << 0)

/** TIM3_OR - TIM3 option register */
#define TIM3_OR_ITR2_RMP   (1 << 0)

/** TIMx_CR1 - TIM9 control register 1 */
#define TIMX_CR1_CKD       (1 << 9)
#define TIMX_CR1_ARPE      (1 << 7)
#define TIMX_CR1_CMS       (1 << 6)
#define TIMX_CR1_DIR       (1 << 4)
#define TIMX_CR1_OPM       (1 << 3)
#define TIMX_CR1_URS       (1 << 2)
#define TIMX_CR1_UDIS      (1 << 1)
#define TIMX_CR1_CEN       (1 << 0)

/** TIMx_CR2 - TIM9 control register 2 */
#define TIMX_CR2_MMS       (1 << 6)

/** TIMx_SMCR - TIM9 slave mode control register */
#define TIMX_SMCR_ETP      (1 << 15)
#define TIMX_SMCR_ECE      (1 << 14)
#define TIMX_SMCR_ETPS     (1 << 13)
#define TIMX_SMCR_ETF      (1 << 11)
#define TIMX_SMCR_MSM      (1 << 7)
#define TIMX_SMCR_TS       (1 << 6)
#define TIMX_SMCR_SMS      (1 << 2)

/** TIMx_DIER - TIM9 Interrupt enable register */
#define TIMX_DIER_TIE      (1 << 6)
#define TIMX_DIER_CC2IE    (1 << 2)
#define TIMX_DIER_CC1IE    (1 << 1)
#define TIMX_DIER_UIE      (1 << 0)

/** TIMx_SR - TIM9 status register */
#define TIMX_SR_CC2OF      (1 << 10)
#define TIMX_SR_CC1OF      (1 << 9)
#define TIMX_SR_TIF        (1 << 6)
#define TIMX_SR_CC2IF      (1 << 2)
#define TIMX_SR_CC1IF      (1 << 1)
#define TIMX_SR_UIF        (1 << 0)

/** TIMx_EGR - TIM9 event generation register */
#define TIMX_EGR_TG        (1 << 6)
#define TIMX_EGR_CC2G      (1 << 2)
#define TIMX_EGR_CC1G      (1 << 1)
#define TIMX_EGR_UG        (1 << 0)

/** TIM9_OR - TIM9 option register 1 */
#define TIM9_OR_ITR1_RMP   (1 << 2)
#define TIM9_OR_TI1_RMP    (1 << 1)

/** TIM10_OR - TIM10 option register 1 */
#define TIM10_OR_TI1_RMP_RI (1 << 3)
#define TIM10_OR_ETR_RMP   (1 << 2)
#define TIM10_OR_TI1_RMP   (1 << 1)

/** TIM11_OR - TIM11 option register 1 */
#define TIM11_OR_TI1_RMP_RI (1 << 3)
#define TIM11_OR_ETR_RMP   (1 << 2)
#define TIM11_OR_TI1_RMP   (1 << 1)

/** RTC_TR - RTC time register */
#define RTC_TR_PM          (1 << 22)
#define RTC_TR_HT          (1 << 21)
#define RTC_TR_HU          (1 << 19)
#define RTC_TR_MNT         (1 << 14)
#define RTC_TR_MNU         (1 << 11)
#define RTC_TR_ST          (1 << 6)
#define RTC_TR_SU          (1 << 3)

/** RTC_DR - RTC date register */
#define RTC_DR_YT          (1 << 23)
#define RTC_DR_YU          (1 << 19)
#define RTC_DR_WDU         (1 << 15)
#define RTC_DR_MT          (1 << 12)
#define RTC_DR_MU          (1 << 11)
#define RTC_DR_DT          (1 << 5)
#define RTC_DR_DU          (1 << 3)

/** RTC_CR - RTC control register */
#define RTC_CR_COE         (1 << 23)
#define RTC_CR_OSEL        (1 << 22)
#define RTC_CR_POL         (1 << 20)
#define RTC_CR_COSEL       (1 << 19)
#define RTC_CR_BKP         (1 << 18)
#define RTC_CR_SUB1H       (1 << 17)
#define RTC_CR_ADD1H       (1 << 16)
#define RTC_CR_TSIE        (1 << 15)
#define RTC_CR_WUTIE       (1 << 14)
#define RTC_CR_ALRBIE      (1 << 13)
#define RTC_CR_ALRAIE      (1 << 12)
#define RTC_CR_TSE         (1 << 11)
#define RTC_CR_WUTE        (1 << 10)
#define RTC_CR_ALRBE       (1 << 9)
#define RTC_CR_ALRAE       (1 << 8)
#define RTC_CR_DCE         (1 << 7)
#define RTC_CR_FMT         (1 << 6)
#define RTC_CR_BYPSHAD     (1 << 5)
#define RTC_CR_REFCKON     (1 << 4)
#define RTC_CR_TSEDGE      (1 << 3)
#define RTC_CR_WUCKSEL     (1 << 2)
#define RTC_CR_to          (1 << 2)

/** RTC_ISR - RTC initialization and status register */
#define RTC_ISR_RECALPF    (1 << 16)
#define RTC_ISR_TAMP3F     (1 << 15)
#define RTC_ISR_TAMP2F     (1 << 14)
#define RTC_ISR_TAMP1F     (1 << 13)
#define RTC_ISR_TSOVF      (1 << 12)
#define RTC_ISR_TSF        (1 << 11)
#define RTC_ISR_WUTF       (1 << 10)
#define RTC_ISR_ALRBF      (1 << 9)
#define RTC_ISR_ALRAF      (1 << 8)
#define RTC_ISR_INIT       (1 << 7)
#define RTC_ISR_INITF      (1 << 6)
#define RTC_ISR_RSF        (1 << 5)
#define RTC_ISR_INITS      (1 << 4)
#define RTC_ISR_SHPF       (1 << 3)
#define RTC_ISR_WUTWF      (1 << 2)
#define RTC_ISR_ALRBWF     (1 << 1)
#define RTC_ISR_ALRAWF     (1 << 0)

/** RTC_PRER - RTC prescaler register */
#define RTC_PRER_PREDIV_A  (1 << 22)
#define RTC_PRER_PREDIV_S  (1 << 14)

/** RTC_WUTR - RTC wakeup timer register */
#define RTC_WUTR_WUT       (1 << 15)

/** RTC_CALIBR - RTC calibration register */
#define RTC_CALIBR_DCS     (1 << 7)
#define RTC_CALIBR_DC      (1 << 4)

/** RTC_ALRMAR - RTC alarm A register */
#define RTC_ALRMAR_MSK4    (1 << 31)
#define RTC_ALRMAR_WDSEL   (1 << 30)
#define RTC_ALRMAR_DT      (1 << 29)
#define RTC_ALRMAR_DU      (1 << 27)
#define RTC_ALRMAR_MSK3    (1 << 23)
#define RTC_ALRMAR_PM      (1 << 22)
#define RTC_ALRMAR_HT      (1 << 21)
#define RTC_ALRMAR_HU      (1 << 19)
#define RTC_ALRMAR_MSK2    (1 << 15)
#define RTC_ALRMAR_MNT     (1 << 14)
#define RTC_ALRMAR_MNU     (1 << 11)
#define RTC_ALRMAR_MSK1    (1 << 7)
#define RTC_ALRMAR_ST      (1 << 6)
#define RTC_ALRMAR_SU      (1 << 3)

/** RTC_ALRMBR - RTC alarm B register */
#define RTC_ALRMBR_MSK4    (1 << 31)
#define RTC_ALRMBR_WDSEL   (1 << 30)
#define RTC_ALRMBR_DT      (1 << 29)
#define RTC_ALRMBR_DU      (1 << 27)
#define RTC_ALRMBR_MSK3    (1 << 23)
#define RTC_ALRMBR_PM      (1 << 22)
#define RTC_ALRMBR_HT      (1 << 21)
#define RTC_ALRMBR_HU      (1 << 19)
#define RTC_ALRMBR_MSK2    (1 << 15)
#define RTC_ALRMBR_MNT     (1 << 14)
#define RTC_ALRMBR_MNU     (1 << 11)
#define RTC_ALRMBR_MSK1    (1 << 7)
#define RTC_ALRMBR_ST      (1 << 6)
#define RTC_ALRMBR_SU      (1 << 3)

/** RTC_WPR - RTC write protection register */
#define RTC_WPR_KEY        (1 << 7)

/** RTC_SSR - RTC sub second register */
#define RTC_SSR_SS         (1 << 15)

/** RTC_SHIFTR - RTC shift control register */
#define RTC_SHIFTR_ADD1S   (1 << 31)
#define RTC_SHIFTR_SUBFS   (1 << 14)

/** RTC_TSTR - RTC time stamp time register */
#define RTC_TSTR_PM        (1 << 22)
#define RTC_TSTR_HT        (1 << 21)
#define RTC_TSTR_HU        (1 << 19)
#define RTC_TSTR_MNT       (1 << 14)
#define RTC_TSTR_MNU       (1 << 11)
#define RTC_TSTR_ST        (1 << 6)
#define RTC_TSTR_SU        (1 << 3)

/** RTC_TSDR - RTC time stamp date register */
#define RTC_TSDR_WDU       (1 << 15)
#define RTC_TSDR_MT        (1 << 12)
#define RTC_TSDR_MU        (1 << 11)
#define RTC_TSDR_DT        (1 << 5)
#define RTC_TSDR_DU        (1 << 3)

/** RTC_TSSSR - RTC timestamp sub second register */
#define RTC_TSSSR_SS       (1 << 15)

/** RTC_CALR - RTC calibration register */
#define RTC_CALR_CALP      (1 << 15)
#define RTC_CALR_CALW8     (1 << 14)
#define RTC_CALR_CALW16    (1 << 13)
#define RTC_CALR_CALM      (1 << 8)

/** RTC_ALRMASSR - RTC alarm A sub second register */
#define RTC_ALRMASSR_MASKSS (1 << 27)
#define RTC_ALRMASSR_SS    (1 << 14)

/** RTC_ALRMBSSR - RTC alarm B sub second register */
#define RTC_ALRMBSSR_MASKSS (1 << 27)
#define RTC_ALRMBSSR_SS    (1 << 14)

/** IWDG_KR - Key register */
#define IWDG_KR_KEY        (1 << 15)

/** IWDG_PR - Prescaler register */
#define IWDG_PR_PR         (1 << 2)

/** IWDG_RLR - Reload register */

/** IWDG_SR - Status register */
#define IWDG_SR_RVU        (1 << 1)
#define IWDG_SR_PVU        (1 << 0)

/** WWDG_CR - Control register */
#define WWDG_CR_WDGA       (1 << 7)
#define WWDG_CR_T          (1 << 6)

/** WWDG_CFR - Configuration register */
#define WWDG_CFR_EWI       (1 << 9)
#define WWDG_CFR_WDGTB     (1 << 8)
#define WWDG_CFR_W         (1 << 6)

/** WWDG_SR - Status register */
#define WWDG_SR_EWIF       (1 << 0)

/** AES_CR - AES control register */
#define AES_CR_DMAOUTEN    (1 << 12)
#define AES_CR_DMAINEN     (1 << 11)
#define AES_CR_ERRIE       (1 << 10)
#define AES_CR_CCFIE       (1 << 9)
#define AES_CR_ERRC        (1 << 8)
#define AES_CR_CCFC        (1 << 7)
#define AES_CR_CHMOD       (1 << 6)
#define AES_CR_MODE        (1 << 4)
#define AES_CR_DATATYPE    (1 << 2)
#define AES_CR_EN          (1 << 0)

/** AES_SR - AES status register */
#define AES_SR_WRERR       (1 << 2)
#define AES_SR_RDERR       (1 << 1)
#define AES_SR_CCF         (1 << 0)

/** AES_DINR - AES data input register */
#define AES_DINR_DINR      (1 << 31)

/** AES_DOUTR - AES data output register */
#define AES_DOUTR_DOUTR    (1 << 31)

/** AES_KEYR1 - AES key register 1 */
#define AES_KEYR1_KEYR1    (1 << 31)

/** AES_KEYR2 - AES key register 2 */
#define AES_KEYR2_KEYR2    (1 << 31)

/** AES_KEYR3 - AES key register 3 */
#define AES_KEYR3_KEYR3    (1 << 31)

/** AES_IVR0 - AES initialization vector register 0 */
#define AES_IVR0_IVR0      (1 << 31)

/** AES_IVR1 - AES initialization vector register 1 */

/** AES_IVR2 - AES initialization vector register 2 */
#define AES_IVR2_IVR2      (1 << 31)

/** AES_IVR3 - AES initialization vector register 3 */
#define AES_IVR3_IVR3      (1 << 31)

/** I2C_CR1 - I2C Control register 1 */
#define I2C_CR1_SWRST      (1 << 15)
#define I2C_CR1_ALERT      (1 << 13)
#define I2C_CR1_PEC        (1 << 12)
#define I2C_CR1_POS        (1 << 11)
#define I2C_CR1_ACK        (1 << 10)
#define I2C_CR1_STOP       (1 << 9)
#define I2C_CR1_START      (1 << 8)
#define I2C_CR1_NOSTRETCH  (1 << 7)
#define I2C_CR1_ENGC       (1 << 6)
#define I2C_CR1_ENPEC      (1 << 5)
#define I2C_CR1_ENARP      (1 << 4)
#define I2C_CR1_SMBTYPE    (1 << 3)
#define I2C_CR1_SMBUS      (1 << 1)
#define I2C_CR1_PE         (1 << 0)

/** I2C_CR2 - I2C Control register 2 */
#define I2C_CR2_LAST       (1 << 12)
#define I2C_CR2_DMAEN      (1 << 11)
#define I2C_CR2_ITBUFEN    (1 << 10)
#define I2C_CR2_ITEVTEN    (1 << 9)
#define I2C_CR2_FREQ       (1 << 5)

/** I2C_OAR1 - I2C Own address register 1 */
#define I2C_OAR1_ADDMODE   (1 << 15)
#define I2C_OAR1_ADD0      (1 << 0)

/** I2C_OAR2 - I2C Own address register 2 */
#define I2C_OAR2_ADD2      (1 << 7)
#define I2C_OAR2_ENDUAL    (1 << 0)

/** I2C_DR - I2C Data register */
#define I2C_DR_DR          (1 << 7)

/** I2C_SR1 - I2C Status register 1 */
#define I2C_SR1_SMBALERT   (1 << 15)
#define I2C_SR1_TIMEOUT    (1 << 14)
#define I2C_SR1_PECERR     (1 << 12)
#define I2C_SR1_OVR        (1 << 11)
#define I2C_SR1_AF         (1 << 10)
#define I2C_SR1_ARLO       (1 << 9)
#define I2C_SR1_BERR       (1 << 8)
#define I2C_SR1_TxE        (1 << 7)
#define I2C_SR1_RxNE       (1 << 6)
#define I2C_SR1_STOPF      (1 << 4)
#define I2C_SR1_ADD10      (1 << 3)
#define I2C_SR1_BTF        (1 << 2)
#define I2C_SR1_ADDR       (1 << 1)
#define I2C_SR1_SB         (1 << 0)

/** I2C_SR2 - I2C Status register 2 */
#define I2C_SR2_PEC        (1 << 15)
#define I2C_SR2_DUALF      (1 << 7)
#define I2C_SR2_SMBHOST    (1 << 6)
#define I2C_SR2_SMBDEFAULT (1 << 5)
#define I2C_SR2_GENCALL    (1 << 4)
#define I2C_SR2_TRA        (1 << 2)
#define I2C_SR2_BUSY       (1 << 1)
#define I2C_SR2_MSL        (1 << 0)

/** I2C_CCR - I2C Clock control register */
#define I2C_CCR_DUTY       (1 << 14)
#define I2C_CCR_CCR        (1 << 11)

/** I2C_TRISE - I2C TRISE register */
#define I2C_TRISE_TRISE    (1 << 5)

/** USART_SR - Status register */
#define USART_SR_CTS       (1 << 9)
#define USART_SR_LBD       (1 << 8)
#define USART_SR_TXE       (1 << 7)
#define USART_SR_TC        (1 << 6)
#define USART_SR_RXNE      (1 << 5)
#define USART_SR_IDLE      (1 << 4)
#define USART_SR_ORE       (1 << 3)
#define USART_SR_NF        (1 << 2)
#define USART_SR_FE        (1 << 1)
#define USART_SR_PE        (1 << 0)

/** USART_DR - Data register */
#define USART_DR_DR        (1 << 8)

/** USART_BRR - Baud rate register */
#define USART_BRR_DIV_Mantissa (1 << 15)
#define USART_BRR_DIV_Fraction (1 << 3)

/** USART_CR1 - Control register 1 */
#define USART_CR1_OVER8    (1 << 15)
#define USART_CR1_UE       (1 << 13)
#define USART_CR1_M        (1 << 12)
#define USART_CR1_WAKE     (1 << 11)
#define USART_CR1_PCE      (1 << 10)
#define USART_CR1_PS       (1 << 9)
#define USART_CR1_PEIE     (1 << 8)
#define USART_CR1_TXEIE    (1 << 7)
#define USART_CR1_TCIE     (1 << 6)
#define USART_CR1_RXNEIE   (1 << 5)
#define USART_CR1_IDLEIE   (1 << 4)
#define USART_CR1_TE       (1 << 3)
#define USART_CR1_RE       (1 << 2)
#define USART_CR1_RWU      (1 << 1)
#define USART_CR1_SBK      (1 << 0)

/** USART_CR2 - Control register 2 */
#define USART_CR2_LINEN    (1 << 14)
#define USART_CR2_STOP     (1 << 13)
#define USART_CR2_CLKEN    (1 << 11)
#define USART_CR2_CPOL     (1 << 10)
#define USART_CR2_CPHA     (1 << 9)
#define USART_CR2_LBCL     (1 << 8)
#define USART_CR2_LBDIE    (1 << 6)
#define USART_CR2_LBDL     (1 << 5)
#define USART_CR2_ADD      (1 << 3)

/** USART_CR3 - Control register 3 */
#define USART_CR3_ONEBIT   (1 << 11)
#define USART_CR3_CTSIE    (1 << 10)
#define USART_CR3_CTSE     (1 << 9)
#define USART_CR3_RTSE     (1 << 8)
#define USART_CR3_DMAT     (1 << 7)
#define USART_CR3_DMAR     (1 << 6)
#define USART_CR3_SCEN     (1 << 5)
#define USART_CR3_NACK     (1 << 4)
#define USART_CR3_HDSEL    (1 << 3)
#define USART_CR3_IRLP     (1 << 2)
#define USART_CR3_IREN     (1 << 1)
#define USART_CR3_EIE      (1 << 0)

/** USART_GTPR - Guard time and prescaler register */
#define USART_GTPR_GT      (1 << 15)
#define USART_GTPR_PSC     (1 << 7)

/** SPI_CR1 - SPI control register 1 */
#define SPI_CR1_BIDIMODE   (1 << 15)
#define SPI_CR1_BIDIOE     (1 << 14)
#define SPI_CR1_CRCEN      (1 << 13)
#define SPI_CR1_CRCNEXT    (1 << 12)
#define SPI_CR1_DFF        (1 << 11)
#define SPI_CR1_RXONLY     (1 << 10)
#define SPI_CR1_SSM        (1 << 9)
#define SPI_CR1_SSI        (1 << 8)
#define SPI_CR1_LSBFIRST   (1 << 7)
#define SPI_CR1_SPE        (1 << 6)
#define SPI_CR1_BR         (1 << 5)
#define SPI_CR1_MSTR       (1 << 2)
#define SPI_CR1_CPHA       (1 << 0)

/** SPI_CR2 - SPI control register 2 */
#define SPI_CR2_TXEIE      (1 << 7)
#define SPI_CR2_RXNEIE     (1 << 6)
#define SPI_CR2_ERRIE      (1 << 5)
#define SPI_CR2_FRF        (1 << 4)
#define SPI_CR2_SSOE       (1 << 2)
#define SPI_CR2_TXDMAEN    (1 << 1)
#define SPI_CR2_RXDMAEN    (1 << 0)

/** SPI_SR - SPI status register */
#define SPI_SR_FRE         (1 << 8)
#define SPI_SR_BSY         (1 << 7)
#define SPI_SR_OVR         (1 << 6)
#define SPI_SR_MODF        (1 << 5)
#define SPI_SR_CRCERR      (1 << 4)
#define SPI_SR_UDR         (1 << 3)
#define SPI_SR_CHSIDE      (1 << 2)
#define SPI_SR_TXE         (1 << 1)
#define SPI_SR_RXNE        (1 << 0)

/** SPI_DR - SPI data register */
#define SPI_DR_DR          (1 << 15)

/** SPI_CRCPR - SPI CRC polynomial register */
#define SPI_CRCPR_CRCPOLY  (1 << 15)

/** SPI_RXCRCR - SPI RX CRC register */
#define SPI_RXCRCR_RXCRC   (1 << 15)

/** SPI_TXCRCR - SPI TX CRC register */
#define SPI_TXCRCR_TXCRC   (1 << 15)

/** SPI_I2SCFGR - SPI_I2S configuration register */
#define SPI_I2SCFGR_I2SMOD (1 << 11)
#define SPI_I2SCFGR_I2SE   (1 << 10)
#define SPI_I2SCFGR_I2SCFG (1 << 9)
#define SPI_I2SCFGR_PCMSYNC (1 << 7)
#define SPI_I2SCFGR_I2SSTD (1 << 5)
#define SPI_I2SCFGR_CKPOL  (1 << 3)
#define SPI_I2SCFGR_DATLEN (1 << 2)
#define SPI_I2SCFGR_CHLEN  (1 << 0)

/** SPI_I2SPR - SPI_I2S prescaler register */
#define SPI_I2SPR_MCKOE    (1 << 9)
#define SPI_I2SPR_ODD      (1 << 8)
#define SPI_I2SPR_I2SDIV   (1 << 7)

/** SDIO_POWER - SDIO power control register */
#define SDIO_POWER_PWRCTRL (1 << 1)

/** SDIO_CLKCR - SDI clock control register */
#define SDIO_CLKCR_HWFC_EN (1 << 14)
#define SDIO_CLKCR_WIDBUS  (1 << 12)
#define SDIO_CLKCR_BYPASS  (1 << 10)
#define SDIO_CLKCR_PWRSAV  (1 << 9)
#define SDIO_CLKCR_CLKEN   (1 << 8)
#define SDIO_CLKCR_CLKDIV  (1 << 7)

/** SDIO_ARG - SDIO argument register */
#define SDIO_ARG_CMDARG    (1 << 31)

/** SDIO_CMD - SDIO command register */
#define SDIO_CMD_ATACMD    (1 << 14)
#define SDIO_CMD_nIEN      (1 << 13)
#define SDIO_CMD_ENCMDcompl (1 << 12)
#define SDIO_CMD_SDIOSuspend (1 << 11)
#define SDIO_CMD_CPSMEN    (1 << 10)
#define SDIO_CMD_WAITPEND  (1 << 9)
#define SDIO_CMD_WAITINT   (1 << 8)
#define SDIO_CMD_WAITRESP  (1 << 7)
#define SDIO_CMD_CMDINDEX  (1 << 5)

/** SDIO_RESPCMD - SDIO command response register */
#define SDIO_RESPCMD_RESPCMD (1 << 5)

/** SDIO_DTIMER - SDIO data timer register */
#define SDIO_DTIMER_DATATIME (1 << 31)

/** SDIO_DLEN - SDIO data length register */
#define SDIO_DLEN_DATALENGTH (1 << 24)

/** SDIO_DCTRL - SDIO data control register */
#define SDIO_DCTRL_SDIOEN  (1 << 11)
#define SDIO_DCTRL_RWMOD   (1 << 10)
#define SDIO_DCTRL_RWSTOP  (1 << 9)
#define SDIO_DCTRL_RWSTART (1 << 8)
#define SDIO_DCTRL_DBLOCKSIZE (1 << 7)
#define SDIO_DCTRL_DMAEN   (1 << 3)
#define SDIO_DCTRL_DTMODE  (1 << 2)
#define SDIO_DCTRL_DTDIR   (1 << 1)
#define SDIO_DCTRL_DTEN    (1 << 0)

/** SDIO_DCOUNT - SDIO data counter register */
#define SDIO_DCOUNT_DATACOUNT (1 << 24)

/** SDIO_STA - SDIO status register */
#define SDIO_STA_CEATAEND  (1 << 23)
#define SDIO_STA_SDIOIT    (1 << 22)
#define SDIO_STA_RXDAVL    (1 << 21)
#define SDIO_STA_TXDAVL    (1 << 20)
#define SDIO_STA_RXFIFOE   (1 << 19)
#define SDIO_STA_TXFIFOE   (1 << 18)
#define SDIO_STA_RXFIFOF   (1 << 17)
#define SDIO_STA_TXFIFOF   (1 << 16)
#define SDIO_STA_RXFIFOHF  (1 << 15)
#define SDIO_STA_TXFIFOHE  (1 << 14)
#define SDIO_STA_RXACT     (1 << 13)
#define SDIO_STA_TXACT     (1 << 12)
#define SDIO_STA_CMDACT    (1 << 11)
#define SDIO_STA_DBCKEND   (1 << 10)
#define SDIO_STA_STBITERR  (1 << 9)
#define SDIO_STA_DATAEND   (1 << 8)
#define SDIO_STA_CMDSENT   (1 << 7)
#define SDIO_STA_CMDREND   (1 << 6)
#define SDIO_STA_RXOVERR   (1 << 5)
#define SDIO_STA_TXUNDERR  (1 << 4)
#define SDIO_STA_DTIMEOUT  (1 << 3)
#define SDIO_STA_CTIMEOUT  (1 << 2)
#define SDIO_STA_DCRCFAIL  (1 << 1)
#define SDIO_STA_CCRCFAIL  (1 << 0)

/** SDIO_ICR - SDIO interrupt clear register */
#define SDIO_ICR_CEATAENDC (1 << 23)
#define SDIO_ICR_SDIOITC   (1 << 22)
#define SDIO_ICR_DBCKENDC  (1 << 10)
#define SDIO_ICR_STBITERRC (1 << 9)
#define SDIO_ICR_DATAENDC  (1 << 8)
#define SDIO_ICR_CMDSENTC  (1 << 7)
#define SDIO_ICR_CMDRENDC  (1 << 6)
#define SDIO_ICR_RXOVERRC  (1 << 5)
#define SDIO_ICR_TXUNDERRC (1 << 4)
#define SDIO_ICR_DTIMEOUTC (1 << 3)
#define SDIO_ICR_CTIMEOUTC (1 << 2)
#define SDIO_ICR_DCRCFAILC (1 << 1)
#define SDIO_ICR_CCRCFAILC (1 << 0)

/** SDIO_MASK - SDIO mask register */
#define SDIO_MASK_CEATAENDIE (1 << 23)
#define SDIO_MASK_SDIOITIE (1 << 22)
#define SDIO_MASK_RXDAVLIE (1 << 21)
#define SDIO_MASK_TXDAVLIE (1 << 20)
#define SDIO_MASK_RXFIFOEIE (1 << 19)
#define SDIO_MASK_TXFIFOEIE (1 << 18)
#define SDIO_MASK_RXFIFOFIE (1 << 17)
#define SDIO_MASK_TXFIFOFIE (1 << 16)
#define SDIO_MASK_RXFIFOHFIE (1 << 15)
#define SDIO_MASK_TXFIFOHEIE (1 << 14)
#define SDIO_MASK_RXACTIE  (1 << 13)
#define SDIO_MASK_TXACTIE  (1 << 12)
#define SDIO_MASK_CMDACTIE (1 << 11)
#define SDIO_MASK_DBCKENDIE (1 << 10)
#define SDIO_MASK_STBITERRIE (1 << 9)
#define SDIO_MASK_DATAENDIE (1 << 8)
#define SDIO_MASK_CMDSENTIE (1 << 7)
#define SDIO_MASK_CMDRENDIE (1 << 6)
#define SDIO_MASK_RXOVERRIE (1 << 5)
#define SDIO_MASK_TXUNDERRIE (1 << 4)
#define SDIO_MASK_DTIMEOUTIE (1 << 3)
#define SDIO_MASK_CTIMEOUTIE (1 << 2)
#define SDIO_MASK_DCRCFAILIE (1 << 1)
#define SDIO_MASK_CCRCFAILIE (1 << 0)

/** SDIO_FIFOCNT - SDIO FIFO counter register */
#define SDIO_FIFOCNT_FIFOCOUNT (1 << 23)

/** SDIO_FIFO - SDIO data FIFO register */

/** DBGMCU_APB1_FZ - Debug MCU APB1 freeze register */
#define DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT (1 << 22)
#define DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT (1 << 21)
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP (1 << 12)
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP (1 << 11)
#define DBGMCU_APB1_FZ_DBG_RTC_STOP (1 << 10)
#define DBGMCU_APB1_FZ_DBG_TIM7_STOP (1 << 5)
#define DBGMCU_APB1_FZ_DBG_TIM6_STOP (1 << 4)
#define DBGMCU_APB1_FZ_DBG_TIM5_STOP (1 << 3)
#define DBGMCU_APB1_FZ_DBG_TIM4_STOP (1 << 2)
#define DBGMCU_APB1_FZ_DBG_TIM3_STOP (1 << 1)
#define DBGMCU_APB1_FZ_DBG_TIM2_STOP (1 << 0)

/** DBGMCU_APB2_FZ - Debug MCU APB2 freeze register */
#define DBGMCU_APB2_FZ_DBG_TIMx_STOP (1 << 4)
