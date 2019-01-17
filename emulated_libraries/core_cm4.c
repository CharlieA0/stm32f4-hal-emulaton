#include "stm32f4xx_hal.h"

// Emulated Registers
SCnSCB_Type SCS_REG;
SCnSCB_Type * const SCnSCB = &SCS_REG;

ITM_Type ITM_REG;
ITM_Type * const ITM = &ITM_REG;

DWT_Type DWT_REG;
DWT_Type * const DWT = &DWT_REG;

TPI_Type TPI_REG;
TPI_Type * const TPI = &TPI_REG;

CoreDebug_Type CoreDebug_REG;
CoreDebug_Type * const CoreDebug = &CoreDebug_REG;

SysTick_Type  SysTick_REG;
SysTick_Type * const SysTick = &SysTick_REG;

NVIC_Type  NVIC_REG;
NVIC_Type * const NVIC = &NVIC_REG;

SCB_Type  SCB_REG;
SCB_Type * const SCB;

MPU_Type MPU_REG;
MPU_Type * const MPU = &MPU_REG;

FPU_Type FPU_REG;
FPU_Type * const FPU = &FPU_REG;
