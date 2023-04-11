#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: height of the array
 * @width: width of the array
 * Return: On success
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **g;

	if (width < 1 || height < 1)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		g[x] = malloc(width * sizeof(int));
		if (g[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(g[x]);
			free(g);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			g[x][y] = 0;
	}
	return (g);
}
