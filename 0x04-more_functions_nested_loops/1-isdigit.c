#include "main.h"
/**
 * _isdigit - function to check digit
 *
 * @c: is input to check
 *
 *Return: 1 if digit and 0 if not
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
