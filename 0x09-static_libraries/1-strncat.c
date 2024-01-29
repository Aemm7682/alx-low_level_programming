#include "main.h"
/**
 * _strncat - a function that concatenates two string
 *
 * @dest: variable
 *
 * @src: variable
 *
 * @n: variable
 *
 * Return: dest is success
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlength = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
		dest[destlength + i] = src[i];
	dest[destlength + i] = '\0';
	return (dest);
}
