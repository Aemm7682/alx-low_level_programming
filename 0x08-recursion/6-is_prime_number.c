#include "main.h"
/**
 * is_prime_number - function to get prime
 * aux_prime - aux function to get prime
 * @num: is the number under checking
 * @i: is the index
 * Return: return succ
 */
int aux_prime(int num, int i);
int is_prime_number(int n)
{
	return (aux_prime(n, 2));
}
/**
 * aux_prime - aux function to get prime
 * @num: is the number under checking
 * @i: is the index
 * Return: to return value depend in value
 */
int aux_prime(int num, int i)
{
	if (num <= 1)
		return (0);
	if (num == 2)
		return (1);
	if (num % i == 0)
		return (0);
	if (i * i > num)
		return (1);
	return (aux_prime(num, i + 1));
}
