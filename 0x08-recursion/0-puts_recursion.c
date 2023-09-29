#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: is pointer for string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
