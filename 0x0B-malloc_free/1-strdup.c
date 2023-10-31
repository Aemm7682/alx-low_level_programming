#include "main.h"
/**
 * _strlength - function to get the pointer length
 * @a: is pointer for the auxiliary function
 * Return: to return length
 */
int _strlength(char *a)
{
	int i = 0;

	for (; *a ; a++, i++)
		;
	return (i);
}
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
	for (; j < length ; j++)
	{
		x[j] = str[j];
	}
	x[length + 1] = '\0';
	return (x);
	free(x);
}
