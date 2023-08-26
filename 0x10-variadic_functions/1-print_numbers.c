#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @n: number of variable
 * @...: argumen
 * @separator: string
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;

	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
