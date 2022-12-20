#include "main.h"
/**
* reset_to_98 - replaces value using pointer
* @n: pointer to variable being changed
*
* Return: 0
*/
void reset_to_98(int *n)
{
	int i;

	i = 402;
	n = &i;
	*n = 98;
	_putchar(i);
}
