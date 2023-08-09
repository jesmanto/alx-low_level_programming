#include <stdlib.h>

/**
 * free_grid - free array
 * @grid: 2D array
 * @height: number of rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	height -= 1;
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
