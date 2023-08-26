#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - function for sum
 * @n: variable of input
 * @...: argument
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0 ; i < n; i++)
		j += va_arg(args, int);
	va_end(args);
	return (j);
}
