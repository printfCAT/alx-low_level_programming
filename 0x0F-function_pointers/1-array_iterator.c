#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function on each element of an array
* @array: array of elements
* @size: size of array
* @action: pointer to function
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
