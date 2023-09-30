#include "main.h"
/**
 * _print_rev_recursion - function to print in reverse
 * @s: the pointer for the array
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
