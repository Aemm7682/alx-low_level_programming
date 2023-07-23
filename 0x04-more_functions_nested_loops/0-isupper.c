#include "main.h"
/**
 * _isupper - function to check uppercase
 *
 * @c: is input to check
 *
 *Return: 1 if uppercase and 0 if not
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
