#include "main.h"
/**
 * _abs - is function to give only positive value
 *
 * @a: is the input to function
 *
 * Return: is 1 if + and -1 if - else 0
 */
int _abs(int a)
{
	if (a < 0)
		a = (-1) * a;
	return (a);
}
