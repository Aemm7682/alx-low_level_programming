#include "main.h"
/**
 * print_last_digit - is function to print last digit
 *
 * @z: is the input to function
 *
 * Return: is 0 success
 */
void jack_bauer(void)
{
	int hr;
	int min;
	
	for (hr = 0 ; hr <= 23; hr++)
	{
		for (min = 0 ; min <= 59 ; min++)
		{
			_putchar(hr);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
}
