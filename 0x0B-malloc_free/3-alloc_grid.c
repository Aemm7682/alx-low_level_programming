#include "main.h"
/**
 * alloc_grid - to build 2 D array
 * @width: is the width of the array
 * @height: is the height of the array
 * Return: to return the pointer a
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			a[i][j] = 0;
	}
	return (a);
}
