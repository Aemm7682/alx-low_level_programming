#include "main.h"
/**
 * _aux12 - a function to help
 * @s: variable
 * @st: starting
 * @end: ending
 * Return: return
 */
int _aux12(char *s, int st, int end)
{
	if (st >= end)
		return (1);
	if (s[st] != s[end])
		return (0);
	return (s, st + 1, end - 1);
}
/**
 * is_palindome - a function to check
 * @s: variable
 * Return: return
 */
int is_palindome(char *s)
{
	int length = strlen(s);

	return (_aux12(s, 0, length - 1));
}
