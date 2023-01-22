#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - returns index of the 1st element for which cmp function does not
* return 0
* @array: contains elements we are searching into
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
*
* Return: index of the first element for which the cmp function does not
* return 0. -1 otherwise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 0)
				return (-1);
		}
	}
	return (i);
}
