#include "main.h"
#include <stdlib.h>
/**
* array_range - creates array of integers
* @min: 1st array of integers
* @max: 2nd array of integers
*
* Return: pointer to newly created array. NULL otherwise
*/
int *array_range(int min, int max)
{
	int i, *size;

	if (min > max)
		return (NULL);
	size = malloc(sizeof(*size) * ((max - min) + 1));
	if (size == 0)
		return (NULL);
	for (i = 0; i <= max; i++, min++)
		size[i] = min;
		min++;
	return (size);
}
