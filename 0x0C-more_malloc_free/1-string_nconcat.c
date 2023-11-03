#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: is a pointer for s1
 * @s2: is a pointer for s2
 * @n: is the number of letter needed from s2
 * Return: to return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i = 0, j = 0;
	char *z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		n = len_s2;
	z = malloc(len_s1 + n + 1);
	if (z == NULL)
		return (NULL);
	for (; i < len_s1 ; i++)
		z[i] = s1[i];
	for (; j < n ; j++, i++)
		z[i] = z[j];
	z[i] = '\0';
	return (z);
}
