#include "led.h"

void led_init_all()
{


	led_off(LED_GREEN);
	led_off(LED_ORANGE);
	led_off(LED_RED);
	led_off(LED_BLUE);
}

void led_on(uint8_t led_no)
{

}

void led_off(uint8_t led_no)
{

}

void delay(uint32_t count)
{
	for (uint32_t i = 0; i < count; i++);
}
