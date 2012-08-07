#ifndef SPI_H
#define SPI_H

struct SPI_reg_t {
	volatile uint32_t CR1;
	volatile uint32_t CR2;
	volatile uint32_t SR;
	volatile uint32_t DR;
	volatile uint32_t CRCPR;
	volatile uint32_t RXCRCR;
	volatile uint32_t TXCRCR;
	volatile uint32_t I2SCFGR;
	volatile uint32_t I2SPR;
};

class SPI_t {
	public:
		SPI_reg_t& reg;
		
		SPI_t(uint32_t reg_addr) : reg(*(SPI_reg_t*)reg_addr) {}
};

#if defined(STM32F1)

#elif defined(STM32F4)
static SPI_t SPI1(0x40013000);
static SPI_t SPI2(0x40003800);
static SPI_t SPI3(0x40003c00);
#endif

#endif
