#ifndef CDB_H
#define CDB_H

#include <stdint.h>

struct CDB_t{
	volatile uint32_t DHCSR;
	volatile uint32_t DCRSR;
	volatile uint32_t DCRDR;
	volatile uint32_t DEMCR;
};

static CDB_t& CDB = *(CDB_t *)0xE000EDF0;


#define C_DEBUGEN (1 << 0)

#endif