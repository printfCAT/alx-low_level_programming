#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array of integers
* using the interpolation search algorithm
* @array: pointer to the 1st element of array to search in
* @size: no. of elements in array
* @value: value to search for
*
* Return: index of array if successful. -1 otherwise
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high;
	size_t pos;

	if (!array)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
