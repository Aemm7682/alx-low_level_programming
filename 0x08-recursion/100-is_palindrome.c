#include "main.h"
/**
 * is_palindrome - a function that returns 1 if a
 * @s: variable
 * Return: return
 */
int is_palindrome(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0 ; i < length / 2 ; i++)
		if (s[i] != s[length - i - 1])
			return (0);
	return (1);
}
