#include "main.h"
/**
 * _strlen_recursion - function to find the length os the string
 * @s: the pointer of the array
 * Return: function will return the length of the function
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
