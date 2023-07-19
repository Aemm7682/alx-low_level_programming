#include "main.h"
/**
 * _islower  - is function to check letter is lower case
 *
 * c: to check the input of function
 *
 * Return: if lower case case so output is 1 else 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
