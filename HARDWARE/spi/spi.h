#ifndef __SPI_H__
#define __SPI_H__	 
#include "sys.h"

#define SPI2_NSS_PIN	GPIO_Pin_12
#define SPI2_SCK_PIN	GPIO_Pin_13
#define SPI2_MISO_PIN	GPIO_Pin_14
#define SPI2_MOSI_PIN	GPIO_Pin_15

void OLED_GPIO_Init(void);

#endif
