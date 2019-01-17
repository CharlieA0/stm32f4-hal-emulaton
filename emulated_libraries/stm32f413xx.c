#include "stm32f413xx.h"

uint8_t FLASH_SPACE[1500000];
uintptr_t const FLASH_BASE = (uintptr_t) &FLASH_SPACE[0];

//uint8_t SRAM1_SPACE[256000];
//uintptr_t const SRAM1_BASE = (uintptr_t) &SRAM1_SPACE[0];

//uint8_t SRAM2_SPACE[64000];
//uintptr_t SRAM2_BASE = (uintptr_t) &SRAM2_SPACE;

QUADSPI_TypeDef QSPI_R_REG;
QUADSPI_TypeDef * const QUADSPI = &QSPI_R_REG;

TIM_TypeDef TIM2_REG;
TIM_TypeDef TIM3_REG;
TIM_TypeDef TIM4_REG;
TIM_TypeDef TIM5_REG;
TIM_TypeDef TIM6_REG;
TIM_TypeDef TIM7_REG;
TIM_TypeDef TIM12_REG;
TIM_TypeDef TIM13_REG;
TIM_TypeDef TIM14_REG;

TIM_TypeDef * const TIM2;
TIM_TypeDef * const TIM3;
TIM_TypeDef * const TIM4;
TIM_TypeDef * const TIM5;
TIM_TypeDef * const TIM6;
TIM_TypeDef * const TIM7;
TIM_TypeDef * const TIM12;
TIM_TypeDef * const TIM13;
TIM_TypeDef * const TIM14;

LPTIM_TypeDef LPTIM1_REG;
RTC_TypeDef RTC_REG;
WWDG_TypeDef WWDF_REG;
IWDG_TypeDef IWDG_REG;

LPTIM_TypeDef * const LPTIM1 = &LPTIM1_REG;
RTC_TypeDef * const RTC = &RTC_REG;
WWDG_TypeDef * const WWDF = &WWDF_REG;
IWDG_TypeDef * const IWDG = &IWDG_REG;

SPI_TypeDef I2S2ext_REG;
SPI_TypeDef SPI2_REG;
SPI_TypeDef SPI3_REG;
SPI_TypeDef I2S3ext_REG;

SPI_TypeDef * const I2S2ext = &I2S2ext_REG;
SPI_TypeDef * const SPI2 = &SPI2_REG;
SPI_TypeDef * const SPI3 = &SPI3_REG;
SPI_TypeDef * const I2S3ext = &I2S3ext_REG;

USART_TypeDef USART2_REG;
USART_TypeDef USART3_REG;
USART_TypeDef USART4_REG;
USART_TypeDef USART5_REG;

USART_TypeDef * const USART2 = &USART2_REG;
USART_TypeDef * const USART3 = &USART3_REG;
USART_TypeDef * const USART4 = &USART4_REG;
USART_TypeDef * const USART5 = &USART5_REG;

I2C_TypeDef I2C1_REG;
I2C_TypeDef I2C2_REG;
I2C_TypeDef I2C3_REG;

I2C_TypeDef * const I2C1 = &I2C1_REG;
I2C_TypeDef * const I2C2 = &I2C2_REG;
I2C_TypeDef * const I2C3 = &I2C3_REG;

FMPI2C_TypeDef FMPI2C1_REG;
CAN_TypeDef CAN1_REG;
CAN_TypeDef CAN2_REG;
CAN_TypeDef CAN3_REG;
PWR_TypeDef PWR_REG; 
DAC_TypeDef DAC1_REG; 
USART_TypeDef UART7_REG; 
USART_TypeDef UART8_REG; 

FMPI2C_TypeDef * const FMPI2C1 = &FMPI2C1_REG;
CAN_TypeDef * const CAN1 = &CAN1_REG;
CAN_TypeDef * const CAN2 = &CAN2_REG;
CAN_TypeDef * const CAN3 = &CAN3_REG;
PWR_TypeDef * const PWR = &PWR_REG; 
DAC_TypeDef * const DAC1 = &DAC1_REG; 
USART_TypeDef * const UART7 = &UART7_REG; 
USART_TypeDef * const UART8 = &UART8_REG; 

TIM_TypeDef TIM1_REG;
TIM_TypeDef TIM8_REG;

TIM_TypeDef * const TIM1 = &TIM1_REG;
TIM_TypeDef * const TIM8 = &TIM8_REG;

USART_TypeDef USART1_REG;
USART_TypeDef USART6_REG;
USART_TypeDef UART9_REG;
USART_TypeDef UART10_REG;

USART_TypeDef * const USART1 = &USART1_REG;
USART_TypeDef * const USART6 = &USART6_REG;
USART_TypeDef * const UART9 = &UART9_REG;
USART_TypeDef * const UART10 = &UART10_REG;

ADC_TypeDef ADC1_REG;
ADC_Common_TypeDef ADC1_COMMON_REG;

ADC_TypeDef * const ADC1 = &ADC1_REG;
ADC_Common_TypeDef * const ADC1_COMMON = &ADC1_COMMON_REG;

SDIO_TypeDef SDIO_REG;
SDIO_TypeDef * const SDIO = &SDIO_REG;

SPI_TypeDef SPI1_REG;
SPI_TypeDef SPI4_REG;

SPI_TypeDef * const SPI1 = &SPI1_REG;
SPI_TypeDef * const SPI4 = &SPI4_REG;

SYSCFG_TypeDef SYSCFG_REG;

SYSCFG_TypeDef * const SYSCFG = &SYSCFG_REG;

EXTI_TypeDef EXTI_REG; 

EXTI_TypeDef * const EXTI = &EXTI_REG; 

TIM_TypeDef TIM9_REG;
TIM_TypeDef TIM10_REG;
TIM_TypeDef TIM11_REG;

TIM_TypeDef * const TIM9 = &TIM9_REG;
TIM_TypeDef * const TIM10 = &TIM10_REG;
TIM_TypeDef * const TIM11 = &TIM11_REG;

SPI_TypeDef SPI5_REG;

SPI_TypeDef * const SPI5 = &SPI5_REG;

DFSDM_Channel_TypeDef DFSDM1_REG;
DFSDM_Channel_TypeDef DFSDM2_REG;
DFSDM_Channel_TypeDef DFSDM1_Channel0_REG;
DFSDM_Channel_TypeDef DFSDM1_Channel1_REG;
DFSDM_Channel_TypeDef DFSDM1_Channel2_REG;
DFSDM_Channel_TypeDef DFSDM1_Channel3_REG;

DFSDM_Channel_TypeDef * const DFSDM1 = &DFSDM1_REG;
DFSDM_Channel_TypeDef * const DFSDM2 = &DFSDM2_REG;
DFSDM_Channel_TypeDef * const DFSDM1_Channel0 = &DFSDM1_Channel0_REG;
DFSDM_Channel_TypeDef * const DFSDM1_Channel1 = &DFSDM1_Channel1_REG;
DFSDM_Channel_TypeDef * const DFSDM1_Channel2 = &DFSDM1_Channel2_REG;
DFSDM_Channel_TypeDef * const DFSDM1_Channel3 = &DFSDM1_Channel3_REG;

DFSDM_Filter_TypeDef DFSDM1_Filter0_REG;
DFSDM_Filter_TypeDef DFSDM1_Filter1_REG;

DFSDM_Filter_TypeDef * const DFSDM1_Filter0 = &DFSDM1_Filter0_REG;
DFSDM_Filter_TypeDef * const DFSDM1_Filter1 = &DFSDM1_Filter1_REG;

DFSDM_Channel_TypeDef DFSDM2_Channel0_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel1_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel2_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel3_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel4_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel5_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel6_REG;
DFSDM_Channel_TypeDef DFSDM2_Channel7_REG;

DFSDM_Channel_TypeDef * const DFSDM2_Channel0 = &DFSDM2_Channel0_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel1 = &DFSDM2_Channel1_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel2 = &DFSDM2_Channel2_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel3 = &DFSDM2_Channel3_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel4 = &DFSDM2_Channel4_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel5 = &DFSDM2_Channel5_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel6 = &DFSDM2_Channel6_REG;
DFSDM_Channel_TypeDef * const DFSDM2_Channel7 = &DFSDM2_Channel7_REG;

DFSDM_Filter_TypeDef DFSDM2_Filter0_REG;
DFSDM_Filter_TypeDef DFSDM2_Filter1_REG;
DFSDM_Filter_TypeDef DFSDM2_Filter2_REG;
DFSDM_Filter_TypeDef DFSDM2_Filter3_REG;

DFSDM_Filter_TypeDef * const DFSDM2_Filter0 = &DFSDM2_Filter0_REG;
DFSDM_Filter_TypeDef * const DFSDM2_Filter1 = &DFSDM2_Filter1_REG;
DFSDM_Filter_TypeDef * const DFSDM2_Filter2 = &DFSDM2_Filter2_REG;
DFSDM_Filter_TypeDef * const DFSDM2_Filter3 = &DFSDM2_Filter3_REG;

SAI_TypeDef SAI1_REG;

SAI_TypeDef * const SAI1 = &SAI1_REG;

SAI_Block_TypeDef SAI1_Block_A_REG;
SAI_Block_TypeDef SAI1_Block_B_REG;

SAI_Block_TypeDef * const SAI1_Block_A = &SAI1_Block_A_REG;
SAI_Block_TypeDef * const SAI1_Block_B = &SAI1_Block_B_REG;

GPIO_TypeDef GPIOA_REG; 
GPIO_TypeDef GPIOB_REG;
GPIO_TypeDef GPIOC_REG;
GPIO_TypeDef GPIOD_REG;
GPIO_TypeDef GPIOE_REG;
GPIO_TypeDef GPIOF_REG;
GPIO_TypeDef GPIOG_REG;
GPIO_TypeDef GPIOH_REG;

GPIO_TypeDef * const GPIOA = &GPIOA_REG; 
GPIO_TypeDef * const GPIOB = &GPIOB_REG;
GPIO_TypeDef * const GPIOC = &GPIOC_REG;
GPIO_TypeDef * const GPIOD = &GPIOD_REG;
GPIO_TypeDef * const GPIOE = &GPIOE_REG;
GPIO_TypeDef * const GPIOF = &GPIOF_REG;
GPIO_TypeDef * const GPIOG = &GPIOG_REG;
GPIO_TypeDef * const GPIOH = &GPIOH_REG;

CRC_TypeDef CRC_REG;
RCC_TypeDef RCC_REG;
FLASH_TypeDef FLASH_REG;
DMA_TypeDef DMA1_REG;

CRC_TypeDef * const CRC = &CRC_REG;
RCC_TypeDef * const RCC = &RCC_REG;
FLASH_TypeDef * const FLASH = &FLASH_REG;
DMA_TypeDef * const DMA1 = &DMA1_REG;

DMA_Stream_TypeDef DMA1_Stream0_REG = {0, 0, 0, 0, 0, 0, 0, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream1_REG = {0, 0, 0, 0, 0, 0, 1, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream2_REG = {0, 0, 0, 0, 0, 0, 2, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream3_REG = {0, 0, 0, 0, 0, 0, 3, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream4_REG = {0, 0, 0, 0, 0, 0, 4, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream5_REG = {0, 0, 0, 0, 0, 0, 5, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream6_REG = {0, 0, 0, 0, 0, 0, 6, &(DMA1_REG)};
DMA_Stream_TypeDef DMA1_Stream7_REG = {0, 0, 0, 0, 0, 0, 7, &(DMA1_REG)};

DMA_Stream_TypeDef * const DMA1_Stream0 = &DMA1_Stream0_REG;
DMA_Stream_TypeDef * const DMA1_Stream1 = &DMA1_Stream1_REG;
DMA_Stream_TypeDef * const DMA1_Stream2 = &DMA1_Stream2_REG;
DMA_Stream_TypeDef * const DMA1_Stream3 = &DMA1_Stream3_REG;
DMA_Stream_TypeDef * const DMA1_Stream4 = &DMA1_Stream4_REG;
DMA_Stream_TypeDef * const DMA1_Stream5 = &DMA1_Stream5_REG;
DMA_Stream_TypeDef * const DMA1_Stream6 = &DMA1_Stream6_REG;
DMA_Stream_TypeDef * const DMA1_Stream7 = &DMA1_Stream7_REG;

DMA_TypeDef DMA2_REG; 
DMA_TypeDef * const DMA2 = &DMA2_REG; 

DMA_Stream_TypeDef DMA2_Stream0_REG = {0, 0, 0, 0, 0, 0, 0, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream1_REG = {0, 0, 0, 0, 0, 0, 1, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream2_REG = {0, 0, 0, 0, 0, 0, 2, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream3_REG = {0, 0, 0, 0, 0, 0, 3, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream4_REG = {0, 0, 0, 0, 0, 0, 4, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream5_REG = {0, 0, 0, 0, 0, 0, 5, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream6_REG = {0, 0, 0, 0, 0, 0, 6, &(DMA2_REG)};
DMA_Stream_TypeDef DMA2_Stream7_REG = {0, 0, 0, 0, 0, 0, 7, &(DMA2_REG)};

DMA_Stream_TypeDef * const DMA2_Stream0 = &DMA2_Stream0_REG;
DMA_Stream_TypeDef * const DMA2_Stream1 = &DMA2_Stream1_REG;
DMA_Stream_TypeDef * const DMA2_Stream2 = &DMA2_Stream2_REG;
DMA_Stream_TypeDef * const DMA2_Stream3 = &DMA2_Stream3_REG;
DMA_Stream_TypeDef * const DMA2_Stream4 = &DMA2_Stream4_REG;
DMA_Stream_TypeDef * const DMA2_Stream5 = &DMA2_Stream5_REG;
DMA_Stream_TypeDef * const DMA2_Stream6 = &DMA2_Stream6_REG;
DMA_Stream_TypeDef * const DMA2_Stream7 = &DMA2_Stream7_REG;

RNG_TypeDef RNG_REG;
RNG_TypeDef * const RNG = &RNG_REG;

FSMC_Bank1_TypeDef FSMC_Bank1_R_REG;
FSMC_Bank1E_TypeDef FSMC_Bank1E_R_REG;

FSMC_Bank1_TypeDef * const FSMC_Bank1 = &FSMC_Bank1_R_REG;
FSMC_Bank1E_TypeDef * const FSMC_Bank1E = &FSMC_Bank1E_R_REG;

DBGMCU_TypeDef DBGMCU_REG;

DBGMCU_TypeDef * const DBGMCU = &DBGMCU_REG;

USB_OTG_GlobalTypeDef USB_OTG_FS_PERIPH_REG;

USB_OTG_GlobalTypeDef * const USB_OTG_FS = &USB_OTG_FS_PERIPH_REG;

uint32_t const UID_REG[3] = {0,0,0};
const uint32_t* const UID_BASE = &UID_REG[0];

