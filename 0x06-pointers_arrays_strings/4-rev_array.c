#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
* @a: string whose content is to be reversed
* @n: number of elements of the array
*
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, temp, last;

	for (i = 0; i < (n / 2); i++)
	{
		last = n - 1;
		temp = a[last - i];
		a[last - i] = a[i];
		a[i] = temp;
	}
}
