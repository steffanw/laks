#pragma once

struct PWR_t{
	volatile uint32_t CR;
	volatile uint32_t CSR;
};


#if defined(STM32L1)
static PWR_t& PWR = *(PWR_t*)0x40007000;
#endif