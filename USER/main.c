#include "stm32f10x.h" 
#include "sys.h"
#include "delay.h" 
#include "led.h"
#include "oled.h"
#include "usart.h"


int main (void)
{
	delay_init();						// 延时函数初始化
	RCC_Configuration();		// 系统时钟初始化
	LED_Init();							// LED初始化
	OLED_Init();						// OLED初始化
	delay_ms(1000);					// 等待其他设备初始化就绪
	uart1_init(115200);
	
/**********************************************/

	OLED_ShowString(0,0,"Hellow Word");
	while(1)
	{
		USART_SendData(USART1,0x05);
		delay_ms(1000);	
	}	
}	


