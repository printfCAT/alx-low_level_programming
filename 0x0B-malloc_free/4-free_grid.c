#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2D grid
* @grid: pointer to 2D array
* @height: 2nd dimension
*
* Return: freed dimensional grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
