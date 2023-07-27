#include "main.h"
/**
 * reverse_array - a function that reverses the content
 *
 * @a: variable
 *
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int i, j, y;

	for (i = 0, j = n - 1 ; i <= j ; i++, j--)
	{
		y = a[i];
		a[i] = a[j];
		a[j] = y;
	}
}
