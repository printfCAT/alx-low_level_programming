#include "main.h"
/**
* set_bit - sets the bit at given index to 1
* @n: an unsigned long int
* @index: position of bit to set to 1
*
* Return: value of set bit as 1. -1 if unsuccessful
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return (*n |= (1 << index));
}
