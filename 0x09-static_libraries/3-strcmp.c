#include "main.h"
/**
 * _strcmp - a function that copies a string.
 *
 * @s1: variable
 *
 * @s2: variable
 *
 * Return: return comp
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	for ( ; *s1 ; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			comp = ((int) *s1) - ((int) *s2);
			break;
		}
	}
	return (comp);
}
