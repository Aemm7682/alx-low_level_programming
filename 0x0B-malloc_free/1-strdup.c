#include "main.h"
/**
 * _strdup - is main function to copy pointer
 * @str: is the main pointer
 * Return: the pointer x
 */
char *_strdup(char *str)
{
	int length;
	char *x;
	int j = 0;

	if (str == NULL)
		return (NULL);
	length = _strlength(str);
	x = malloc((length + 1) * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (; j < length ; j++)
	{
		x[j] = str[j];
	}
	x[length + 1] = '\0';
	return (x);
}
