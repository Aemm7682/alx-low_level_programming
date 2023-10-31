#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: is the argument
 * @av: argument
 * Return: to retrn the pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, w = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
		length += strlen(av[i]);
	ptr = malloc((length + ac + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, w++)
			ptr[w] = av[i][j];
		ptr[w++] = '\n';
		w++;
	}
	ptr[w] = '\0';
	return (ptr);
}
