#include "main.h"
/**
 *  main - entry point
 *
 *  Description: to print _putchar and return 0
 *
 *  Return:  zero is (success)
 *
 */
int main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);

}
