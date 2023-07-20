#include "main.h"
/**
 * _isalpha - is function to check if the input is lower or uppercase
 *
 * @c: is the input to function
 *
 * Return: is 1 if lowercase else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	return (0);
}
