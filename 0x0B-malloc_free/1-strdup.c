#include "main.h"
/**
 * _strdup - create function
 * @str: variable
 * Return: return value
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *d;

	if (str == Null)
		return (Null);
	for (; str[size] != '\0' ; size++)
		;
	d = malloc(size * sizeof(*str) + 1);
	if (d == 0)
	{
		return (Null);
	}
	else
	{
		for (; i < size ; i++)
			d[i] = str[i];
	}
	return (d);
}
