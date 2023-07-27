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
	int i;

	for  (i = 0 ; i < n && scr[i] != '\0' ; i++)
		dest[i] = scr[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
