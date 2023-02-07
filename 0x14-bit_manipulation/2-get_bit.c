#include <stdio.h>
#include "main.h"
/**
* get_bit - returns balue of a bit at a given index
* @n: an unsigned long int
* @index: position of bit
*
* Return: value of int. -1 if unsuccessful
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n & (1 << index)) != 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return (i);
}
