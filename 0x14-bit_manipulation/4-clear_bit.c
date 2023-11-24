#include "main.h"
/**
 * clear_bit - cler the bit at index
 * @n: the number to index
 * @index: the bit to be clear
 * Return: -1 fail 1 pass
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (8 * sizeof(n)))
		return (-1);
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
