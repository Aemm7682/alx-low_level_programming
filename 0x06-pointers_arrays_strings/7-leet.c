#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: variable
 *
 * Return: return s
 */
char *leet(char *s)
{
	int i, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; let[j] ; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
