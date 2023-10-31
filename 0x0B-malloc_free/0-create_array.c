#include "main.h"
/**
 * create_array - is a function to creat array
 * @size: is the size of the array
 * @c: is the input char to array
 * Return: to return array to amin function
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i = 0;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (; i < size ; i++)
	{
		a[i] = c;
	}
	return (a);
	free(a);
}
