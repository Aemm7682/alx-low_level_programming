#include "main.h"
/**
 * d - aux function
 *
 * @c: variable
 *
 * Return: return 1 if true and 0 if false
 */
char d(char c)
{
	int i;
	char e[] = " \t\n,;.!?\"(){}";

	for (i = 0 ; e[i] ; i++)
		if (c == e[i])
			return (1);
	return (0);
}
/**
 * cap_string - cap string
 *
 * @s: variable
 *
 * Return: return s
 */
char *cap_string(char *s)
{
	int xzo = 1;
	int j;

	for (j = 0 ; s[j] ; j++)
	{
		if (xzo && s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
		xzo = d(s[j]);
	}
	return (s);
}
