#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - converts binary to insigned int
* @b: contains 1s and 0s
*
* Return: unsigned int. 0 if unsuccessful
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (!*b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i]; i++)
	{
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
	}

	return (dec);
}
