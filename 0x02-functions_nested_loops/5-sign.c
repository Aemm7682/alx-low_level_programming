#include "main.h"
/**
 * print_sign - is function to check if the input sign
 *
 * @n: is the input to function
 *
 * Return: is 1 if + and -1 if - else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
