#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - main function
 * @format: constant
 * @...: argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int i;
	char *str;

	for (i = 0; format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
	}
	va_end(args);
	printf("\n");
}
