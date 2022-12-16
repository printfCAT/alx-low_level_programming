#include "main.h"
/**
* print_square - prints a square
* @size: size of square
*
* Return: 0
*/
void print_square(int size);
{
	int c;

	for (c = 1; c <= size; c++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
