#include "main.h"
/**
 * _strlen - create function
 * @s: variable
 * Return: return value
 */
int _strlen(char *s)
{
	int size = 0;

	if (s == NULL)
		return (0);
	for (; s[size] != '\0' ; size++)
		;
	return (size);
}
/**
 * str_concat - function
 * @s1: variable
 * @s2: variable
 * Return: return
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2 + 1) * sizeof(char));
	if (m == 0)
	{
		return (0);
	}
	for (i = 0 ; i <= size1 + size2 ; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
