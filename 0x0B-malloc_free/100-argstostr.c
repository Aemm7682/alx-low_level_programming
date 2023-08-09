#include "main.h"
/**
 * _strlen - function
 * @s: array
 * Return: return size
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
		;
	return (size);
}
/**
 * argstostr - function
 * @ac: variable
 * @av: array
 * Return: return
 */
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, comp = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for ( ; i < ac ; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0'; j++, comp++)
			s[comp] = av[i][j];
		s[comp] = '\n';
		comp++;
	}
	s[comp] = '\0';
	return (s);
}
