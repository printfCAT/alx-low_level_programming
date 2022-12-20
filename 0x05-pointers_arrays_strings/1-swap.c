#include "main.h"
/**
* swap_int
* @a: variable being swapped
* @b: variable being swapped
*
* Return - Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
