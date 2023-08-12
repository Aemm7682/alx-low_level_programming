#include "main.h"
/**
 * *array_range - creat array
 * @min: start min
 * @max: max
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int length, i;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (i = 0 ; i < length ; i++)
		ptr[i] = min++;
	return (ptr);
}
