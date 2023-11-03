#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min: is the minmum value of the array
 * @max: is the maximum value of the array
 * Return: to return a pointer
 */
int *array_range(int min, int max)
{
	int a;
	int *z;

	if (min > max)
		return (NULL);
	z = malloc((max - min + 1) * sizeof(int));
	if (z == NULL)
		return (NULL);
	for (a = 0 ; a <= (max - min) ; a++)
		z[a] = min + a;
	return (z);
}
