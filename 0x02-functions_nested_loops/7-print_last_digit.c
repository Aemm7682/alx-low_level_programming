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
	int ls_dig;

	if (z < 0)
		ls_dig = (-1) * (z % 10);
	else
		ls_dig = z % 10;
	_putchar(ls_dig + '0');
	return (ls_dig);
}
