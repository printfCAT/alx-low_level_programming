#include "main.h"
/**
* print_last_digit - prints last digit of number
* @c: number whose last digit is to be printed
*
* Return: value of last digit of c
*/
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
