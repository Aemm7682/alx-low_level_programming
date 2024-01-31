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
        char x;

        for (x = 'z' ; x >= 'a' ; x--)
		putchar(x);
	putchar('\n');

        return (0);
}
