#include "main.h"
/**
 * _sqrt_recursion - the main function that call the aux to solve
 * @n: the number to get sqrt
 * @min: minmum
 * @max: max
 * Return: return
 */
int aux_sqrt_recursion(int n, int min, int max);
int _sqrt_recursion(int n)
{
	return (aux_sqrt_recursion(n, 0, n));
}
/**
 * aux_sqrt_recursion - aux function to get sqrt
 * @n: variable
 * @min: min value
 * @max: maximum value
 * Return: to return
 */
int aux_sqrt_recursion(int n, int min, int max)
{
	int mid = (min + max) / 2;

	if (n == 1)
		return (n);
	else if (max < min)
		return (-1);
	else if (mid == n / mid)
		return (mid);
	else if (mid < n / mid)
		return (aux_sqrt_recursion(n, mid + 1, max));
	else
		return (aux_sqrt_recursion(n, min, mid - 1));
}
