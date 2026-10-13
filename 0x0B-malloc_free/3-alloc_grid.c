/**
 * 3-alloc_grid - Allocates a 2D grid of integers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates a width x height grid, initialized to 0.
 *
 * Return: Pointer to the grid, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	row = 0;
	while (row < height)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			while (row > 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}
