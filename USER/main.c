#include "stm32f10x.h" 
#include "sys.h"
#include "delay.h" 
#include "led.h"
#include "oled.h"
#include "usart.h"


int main (void)
{
	delay_init();						// ��ʱ������ʼ��
	RCC_Configuration();		// ϵͳʱ�ӳ�ʼ��
	LED_Init();							// LED��ʼ��
	OLED_Init();						// OLED��ʼ��
	delay_ms(1000);					// �ȴ������豸��ʼ������
	
/**********************************************/

	OLED_ShowString(0,0,"Hellow Word");
	while(1)
	{

		delay_ms(1000);	
	}	
}	


