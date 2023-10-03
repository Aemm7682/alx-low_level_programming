#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program to write alpheb
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = '0';

	for (; x <= '9' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
