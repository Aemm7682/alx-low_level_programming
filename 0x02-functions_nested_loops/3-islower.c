#include "main.h"
/**
 * _islower - is function to check if the input is lower or uppercase
 *
 * @c: is the input to function
 *
 * Return: is 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
