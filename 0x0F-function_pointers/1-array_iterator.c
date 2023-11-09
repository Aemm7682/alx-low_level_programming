#include "function_pointers.h"
/**
 * array_iterator - to intiate array
 * @array: is array
 * @size: is the size of array
 * @action: is pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
