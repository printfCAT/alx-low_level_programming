#include "main.h"
/**
* print_triangle - prints a triangle
* @size: size of triangle
*
* Return: 0
*/
void print_triangle(int size)
{
	int s = 0, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (c = 0; c < size; c++)
		{
			while (s < size)
			{
				if ((s + c + 1) >= size)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				s++;
			}
			s = 0;
			_putchar('\n');
		}
}
