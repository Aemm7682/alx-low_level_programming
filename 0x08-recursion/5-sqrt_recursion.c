#include "main.h"
/**
 * aux_sqrt_recursion - auxiliary fun to get the squrt
 * @min: minmum value
 * @max: maximum value
 * Return: depending in the output
 */
int aux_sqrt_recursion(int n, int min, int max)
{
	int mid = (min + max)/ 2;
	if (max < min)
		return (-1);
	if (mid * mid == n)
		return (mid);
	else if (mid * mid < n)
	{
		return (aux_sqrt_recursion(n, mid + 1, max));
	}
	else if (mid * mid > n)
        {
                return (aux_sqrt_recursion(n, min, mid - 1));
        }
}
/**
 * _sqrt_recursion - the main function that call the aux to solve
 * @n: the number to get sqrt
 */
int _sqrt_recursion(int n)
{
	aux_sqrt_recursion(n,0 ,n);
}
