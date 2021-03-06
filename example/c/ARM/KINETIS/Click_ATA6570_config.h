#include "Click_ATA6570_types.h"

const uint32_t _ATA6570_SPI_CFG[ 2 ] = 
{ 
	1000000,
	_SPI_CFG_CLK_PHASE_CHG_LEADING | 
	_SPI_CFG_CLK_IDLE_LOW |
	_SPI_CFG_MASTER | 
	_SPI_CFG_MSB_FIRST |
	_SPI_CFG_FRAME_SIZE_8BITS | 
	_SPI_CFG_SELECT_CTAR0
};

const uint32_t _ATA6570_UART_CFG [ 4 ] = 
{
	9600,  
	_UART_8_BIT_DATA, 
	_UART_NOPARITY, 
	_UART_ONE_STOPBIT
};

