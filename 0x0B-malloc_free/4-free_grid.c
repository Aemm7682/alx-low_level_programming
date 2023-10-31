#include "main.h"
/**
 * free_grid - to build 2 D array
 * @height: is the height of the array
 * @grid: is pointer
 * Return: to return void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
