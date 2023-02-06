#include <stdio.h>
#include "main.h"
/**
* print_binary - prints a long int in binary
* @n: an unsigned long int
*
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
			printf("1");
		else
			printf("0");
	}
}
