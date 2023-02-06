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
	int i, temp = n;

	if (n == 0)
		printf("0");
	for ( i = 0; (temp >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
