#include "main.h"
/**
 *  main - entry point
 *
 *  Description: to print alphabet in lowercase _putchar and return 0
 *
 *  Return:  zero is (success)
 *
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
