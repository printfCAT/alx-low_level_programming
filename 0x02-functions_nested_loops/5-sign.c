#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: number to be checked
*
* Return: 1 if number is greater than 0, 0 if number is 0 & -1 otherwise
*/
int print_sign(int n);
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('n');
	}
}
