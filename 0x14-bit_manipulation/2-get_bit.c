#include "main.h"
/**
 * get_bit -get the bit at the index
 * @n: the number to index
 * @index: the bit to get
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(n))
		return (-1);
	return ((n >> index) & 1);
}
