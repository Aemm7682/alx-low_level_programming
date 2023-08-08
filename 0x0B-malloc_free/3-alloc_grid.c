#include "mian.h"
/**
 * **alloc_grid - function
 * @height: variable
 * @width: Variable
 * Return: return
 */
int **alloc_grid(int width, int height)
{
	int **zap, i, j;

	zap = malloc(sizeof(*zap) * height);
	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < height ; i++)
		{
			zap[i] = malloc(sizeof(**zap) * width);
			if (zap[i] == 0)
			{
				while (i--)
					free(zap[i]);
				free(zap);
				return (NULL);
			}
			for (j = 0 ; j < width ; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}

