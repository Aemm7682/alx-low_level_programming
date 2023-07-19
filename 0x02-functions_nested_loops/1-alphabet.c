#include "main.h"
/**
 *  main - Entry point
 *
 *  description: to print alphabet
 *
 *  return: 0 is (success)
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
