#include "main.h"
/**
 * wildcmp - is a function that compares two strings and returns 1
 * aux_wildcmp - is auxiliary function to help the main one
 * @s1: is a pointer to array of string
 * @s2: is a pointer to array of string
 * Return: return 1 or zero depend on the function
 */
int aux_wildcmp(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (aux_wildcmp(s1, s2));
}
/**
 * aux_wildcmp - is auxiliary function to help the main one
 * @s1: is a pointer to array of string
 * @s2: is a pointer to array of string
 * Return: return zero after compliation of the function
 */
int aux_wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
