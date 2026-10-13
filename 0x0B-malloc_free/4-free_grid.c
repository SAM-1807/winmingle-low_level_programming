/**
 * 4-free_grid - Frees a 2D grid
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Frees a grid allocated by alloc_grid.
 *
 * Return: Nothing
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: The grid to free
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL)
		return;
	row = 0;
	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
