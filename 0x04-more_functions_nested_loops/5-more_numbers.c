#include "main.h"
/**
 * more_numbers - function to print from 0 to 14 10 times
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
