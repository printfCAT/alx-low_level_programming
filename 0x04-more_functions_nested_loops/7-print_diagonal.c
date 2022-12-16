#include "main.h"
/**
* print_diagonal - prints a diagonal line
* @n: number of times \ should be printed
*
* Return: 0
*/
void print_diagonal(int n);
{
	int i = 0, c = 0, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			a = i;
			while (c <= a)
			{
				if (c == a)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				c++
			}
			c = 0;
			i++
		}
	}
}
