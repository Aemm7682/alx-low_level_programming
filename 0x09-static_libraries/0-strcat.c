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
	int destlength = strlen(dest);
	int i;

	for (i = 0 ; i < src[i] && src[i] != '\0'; i++)
		dest[destlength + i] = src[i];
	dest[destlength + i] = '\0';
	return (dest);
}


