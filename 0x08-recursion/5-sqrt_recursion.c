#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: variable
 * @i: variable
 * Return: return
 */
int _aux(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_aux(n, 0));
}
/**
 * _aux - another function to get sqrt
 * @n: variable
 * @i: variable
 * Return: return
 */
int _aux(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_aux(n, i + 1));
}
