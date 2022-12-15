#include "main.h"
/**
* print_last - prints last digit of number
* @c: number whose last digit is to be printed
*
* Return: value of last digit of c
*/
int print_last_digit(int c)
{
	c = c % 10;
	_putchar(c);
	return (0);
}
