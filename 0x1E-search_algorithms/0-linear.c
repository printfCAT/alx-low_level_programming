#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
* using Linear search algorithm
* @array: pointer to first element of the array to search in
* @size: no. of elements in array
* @value: value to search for
*
* Return: index where value is located. -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
