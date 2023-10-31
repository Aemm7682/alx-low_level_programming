#include "main.h"
/**
 * _strlength - function to get the pointer length
 * @a: is pointer for the auxiliary function
 * Return: to return length
 */
int _strlength(char *a)
{
	int i = 0;

	for (; *a ; a++)
		i++;
	return (i);
}
/**
 * str_concat - program to concertat to function
 * @s1: is the first pointer
 * @s2: the second pointer
 * Return: to return the function
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *z;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	len1 = _strlength(s1);
	len2 = _strlength(s2);
	z = malloc((len1 + len2 + 1) * sizeof(char));
	if (z == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
		z[i] = s1[i];
	for (j = 0 ; j < len2 ; j++)
		z[i + j] = s2[j];
	z[len1 + len2 + 1] = '\0';
	return (z);
}
