#include "main.h"
/**
 * factorial - function to get factorial for number
 * @n: variable 
 * Return: to return the factorial if n is +ve and -1 if -ve
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		return n * factorial(n - 1);
	}
}
