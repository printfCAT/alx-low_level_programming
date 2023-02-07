#include "main.h"
/**
* clear_bit - clears the bit at given index to 0
* @n: an unsigned long int
* @index: position of bit to clear to 0
*
* Return: value of cleared bit to 0. -1 if unsuccessful
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return (*n &= ~(1 << index));
}
