#include "main.h"
/**
 * flip_bits - bit that need to flip
 * @n: first number
 * @m: second number
 * Return: number of bit to be flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1UL)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
