#include "main.h"
/**
 * _strcat - a function that concatenates two string
 *
 * @dest: variable
 *
 * @src: variable
 *
 * Return: dest is success
 */
char *_strcat(char *dest, char *src)
{
	unsigned long dest_len = strlen(dest);
	unsigned long i;

	for (i = 0 ; i < src[i] && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
