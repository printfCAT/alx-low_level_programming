#include "main.h"
/**
* print_square - prints a square
* @size: size of square
*
* Return: 0
*/
void print_square(int size);
{
	int c = 0, s;

	if (s <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < size; s++)
		{
			while (c < s)
			{
				_putchar('#');
				c++;
			}
			count = 0;
			_putchar('\n');
		}
	}
}
