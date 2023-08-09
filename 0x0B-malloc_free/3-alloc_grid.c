#include <stdlib.h>

/**
 * alloc_grid - 2d arrar
 * @width: colums
 * @height: rows
 * Return: point t0 array
 */
int **alloc_grid(int width, int height)
{
	int row, col, f, **pt;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	pt = malloc(height * sizeof(*pt));
	for (row = 0; row < height; row++)
	{
		pt[row] = malloc(width * sizeof(int));
		if (pt == NULL)
			return (pt);
		if (pt[row] == NULL)
		{
			for (f = 0; f < row; f++)
				free(pt[f]);
			free(pt);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			pt[row][col] = 0;
	}
	return (pt);
}
