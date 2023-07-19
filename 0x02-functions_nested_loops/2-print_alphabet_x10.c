#include "main.h"
/**
 * print_alphabet - to print alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
