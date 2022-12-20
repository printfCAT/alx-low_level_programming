#include "main.h"
/**
* reset_to_98 - replaces value using pointer
*@n: variable whose value is being updated
*
* Return: 0
*/
void reset_to_98(int *n)
{
	int i = 402;

	n = &i;
	_putchar(i);
	*n = 98;
	_putchar(i);
}
