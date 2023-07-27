#include "main.h"
/**
 * _strncpy - a function that concatenates two strings.
 *
 * @dest: variable
 *
 * @src: Variable
 *
 * @n: variable
 *
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src [j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n ; j++)
		dest[j] = '\0';
	return (dest);
}
