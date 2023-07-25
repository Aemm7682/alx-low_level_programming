#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: is variable
 *
 * @b: is second variable
 */
void swap_int(int *a, int *b)
{
	int swapnum;

	swapnum = *a;
	*a = *b;
	*b = swapnum;
}

