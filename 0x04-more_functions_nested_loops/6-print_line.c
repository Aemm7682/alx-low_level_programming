#include "main.h"
/**
 * print_line - to print new line
 * @n: is the naumber of dash
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
