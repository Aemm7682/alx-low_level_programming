#include "main.h"
/**
 * print_last_digit - is function to print last digit
 *
 * @z: is the input to function
 *
 * Return: is 0 success
 */
int print_last_digit(int z)
{
	int last_dig;

	if (z < 0)
		z = (-1) * z;
		last_dig = z % 10;                              
	else
		last_dig = z % 10;
	_putchar('0' + last_dig);
	return (0);
}

