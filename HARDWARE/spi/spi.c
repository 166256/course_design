#include "spi.h"

/*
	PB12 SPI2_NSS		PA4	SPI1_NSS
	PB13 SPI2_SCK		PA5	SPI1_SCK
	PB14 SPI2_MISO	PA6 SPI1_MISO
	PB15 SPI2_MOSI	PA7 SPI1_MOSI

*/

void OLED_GPIO_Init()
{
	GPIO_InitTypeDef GPIO_InitStructure; 

	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE ); 

	GPIO_InitStructure.GPIO_Pin = SPI2_NSS_PIN; 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	// NSS引脚初始化为普通IO推挽输出
	GPIO_Init(GPIOB, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = SPI2_SCK_PIN; 
	GPIO_Init(GPIOB, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = SPI2_MISO_PIN; 
	GPIO_Init(GPIOB, &GPIO_InitStructure); 
	
	GPIO_InitStructure.GPIO_Pin = SPI2_MOSI_PIN; 
	GPIO_Init(GPIOB, &GPIO_InitStructure); 
}

