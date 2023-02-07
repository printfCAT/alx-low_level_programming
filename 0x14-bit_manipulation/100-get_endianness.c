#include "main.h"
#include <stdio.h>
/**
* get_endianness - checks the endianness for a function
*
* Return: 0 if big endian. 1 if small endian
*/
int get_endianness(void)
{
	int x = 1;

	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
