#include "main.h"
/**
 * set_bit - set bit at index
 * @index: is the bit to set
 * @n: number index
 * Return: -1 is the value of of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(n)))
		return (-1);
	*n |= 1UL << index;
	return (1);
}
