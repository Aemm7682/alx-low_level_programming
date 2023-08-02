#include "main.h"
/**
 * _puts_recursion - a prints a string, followed by a new line
 *
 * @s: variable
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else if
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}

