#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array of integers using
* the Jump Search Algorithm
* @array: pointer to 1st element of the array
* @size: no. of elements in array
* @value: value to search for
*
* Return: index of value. -1 othewise
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, next;

	if (array == NULL)
		return (-1);

	next = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
