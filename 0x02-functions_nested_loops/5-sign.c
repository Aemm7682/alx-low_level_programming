#include "main.h"
/**
 * print_sign - is function to check if the input sign
 *
 * @n: is the input to function
 *
 * Return: is 1 if + and -1 if - else 0
 */
int print_sign(int n)
{
	if (n > 0)
		printf("+");
	return (1);
	if (n < 0)
		printf("-");
	return (-1);
	if (n == 0)
		print("0");
	return (0);
}
