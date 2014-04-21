#pragma once

#include <stdint.h>

struct RI_t{
	volatile uint32_t ICR;
	volatile uint32_t ASCR1;
	volatile uint32_t ASCR2;
	volatile uint32_t HYSCR[4];
	volatile uint32_t ASMR1;
	volatile uint32_t CMR1;
	volatile uint32_t CIRC1;
	volatile uint32_t ASMR2;
	volatile uint32_t CMR2;
	volatile uint32_t CICR2;
	volatile uint32_t ASMR3;
	volatile uint32_t CMR3;
	volatile uint32_t CICR3;
	volatile uint32_t ASMR4;
	volatile uint32_t CMR4;
	volatile uint32_t CICR4;
	volatile uint32_t ASMR5;
	volatile uint32_t CMR5;
	volatile uint32_t CICR5;

};

#if defined(STM32L1)
static RI_t &RI = *(RI_t *)(0x40007C00 + 4);
#endif





