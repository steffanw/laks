#pragma once

#include <stdint.h>


struct COMP_t{
	volatile uint32_t CSR;
};



#if defined(STM32L1)
static COMP_t& COMP = *(COMP_t *)0x40007C00;
#endif