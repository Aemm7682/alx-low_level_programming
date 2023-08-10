#include "main.h"
/**
 * _strlen - function
 * @s: string
 * Return: return size of string
 */
int _strlen(char *s)
{
	int size;

	for (size = 0 ; s[size] != '\0' ; size++)
		;
	return (size);
}
/**
 * string_nconcat - function
 * @s1: string 1
 * @s2: string 2
 * @n: variable
 * Return: return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, size1, size2;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	string = malloc(size1 + n + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		string[i] = s1[i];
	for (j = 0 ; j < n ; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';
	return (string);
}

