#include "main.h"
/**
* flip_bits - returns number of bits to shift to get to next number
* @n: number we're shifting from
* @m: number we're shifting to
*
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, j = 0;
	unsigned long int temp = 1;

	n ^= m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (temp == (n & temp))
			j++;
		temp <<= 1;
	}

	return (j);
}
