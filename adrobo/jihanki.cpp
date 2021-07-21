#include "mbed.h"
#include "adrobo.h"

BusOut led(LED1, LED2, LED3, LED4, LED5);

int main()
{
	while(1)
	{
		int none = 0b00000, full = 0b11111;
		led = none;

		for(int i = 0; i < 5; i++)
		{
			led = 0b10000 >> i;
			wait(0.5);
		}
		for(int i = 0; i < 4; i++)
		{
			led = (0b10000 >> i) | (0b00001);
			wait(0.5);
		}
		for(int i = 0; i < 3; i++)
		{
			led = (0b10000 >> i) | (0b00011);
			wait(0.5);
		}
		for(int i = 0; i < 2; i++)
		{
			led = (0b10000 >> i) | (0b00111);
			wait(0.5);
		}
		for(int i = 0; i < 1; i++)
		{
			led = (0b10000 >> i) | (0b01111);
			wait(0.5);
		}
		for(int i = 0; i < 3; i++)
		{
			led = full;
			wait(0.25);
			led = none;
			wait(0.25);
		}
		wait(3);
	}
}
