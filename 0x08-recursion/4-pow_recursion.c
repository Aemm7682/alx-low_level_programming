#include "main.h"
/**
 * _pow_recursion - function to get x power y
 * @x: is the base number
 * @y: is the power number
 * Return: return value depend in case
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
