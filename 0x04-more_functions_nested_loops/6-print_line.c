#include "main.h"
/**
* print_line - draws a straight line
* @n: number of times to print
*
* Return: 0
*/
void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
