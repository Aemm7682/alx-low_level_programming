#include "main.h"
/**
 * print_rev -  function that prints a string
 *
 * @s: variable
 */
void print_rev(char *s)
{
	int i;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
