#include "main.h"
/**
 * is_palindrome - to check if the text is plain
 * aux_is_palindrome - to help the up function
 * @s: is the pointer for the array of string
 * @start: the start point is zero
 * @end: is the end of the array and equal to len - 1
 * Return: depend on the value
 */
int aux_is_palindrome(char *s, int start, int end);
int is_palindrome(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
		len++;
	return (aux_is_palindrome(s, 0, len - 1));
}
/**
 * aux_is_palindrome - to help the up functioni
 * @s: is the pointer for the array of string
 * @end: is the end of the array and equal to len - 1
 * @start: the start point is zero
 * Return: return
 */
int aux_is_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (aux_is_palindrome(s, start + 1, end - 1));
}
