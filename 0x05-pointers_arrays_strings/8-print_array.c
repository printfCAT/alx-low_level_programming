#include <stdio.h>
#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @a: array of integers
* @n: number of elements to be printed
*
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
