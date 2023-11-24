#include "main.h"
/**
 * print_binary - change entered number to binary
 * @n: the number of print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = 8 * sizeof(n);
	int print = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
