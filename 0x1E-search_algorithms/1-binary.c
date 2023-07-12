#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: pointer to 1st element of array
* @size: size of the array
* @value: value to search for
*
* Return: index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = (mid + 1);
		else
			high = (mid - 1);
	}
	return (-1);
}
