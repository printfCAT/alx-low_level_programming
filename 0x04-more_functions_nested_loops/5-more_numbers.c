#include "main.h"
/**
* more_numbers - prints numbers 0 to 14 10 times
* Return: 0
*/
void more_numbers(void)
{
	int c;
	int count = 0;

	while (count++ <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
