#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - initialize elements to 0
* @width: 1st dimension array
* @height: 2nd dimension array
*
* Return: pointer to 2D array of integers
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **area;

	if (width <= 0 || height <= 0)
		return (NULL);
	area = malloc(sizeof(int) * height);
	if (area == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		area[i] = malloc(sizeof(int) * width);
		if (area[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
				free(area[i]);
			free(area);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
	area[i][j] = 0;
	return (area);
}
