#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: is array
 * @size: is the size
 * @cmp: is pointer
 * Return: return value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
		}
	return (-1);
}
