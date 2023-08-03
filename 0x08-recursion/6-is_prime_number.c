#include "main.h"
/**
 * is_prime_number - a function that returns the natural square root
 * @n: variable
 * @i: variable
 * Return: return
 */
int _aux1(int n, int i);
int is_prime_number(int n);
{
	if (n <= 1)
		return (0);
	return (_aux1(n, 2));
}
/**
 * _aux1 - another function to get sqrt
 * @n: variable
 * @i: variable
 * Return: return
 */
int _aux1(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_aux1(n, i + 1));
}
