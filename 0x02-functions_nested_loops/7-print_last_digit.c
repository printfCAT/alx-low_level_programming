#include "main.h"
/**
* print_last - prints last digit of number
* @c: number whose last digit is to be printed
*
* Return: value of last digit of c
*/
int print_last_digit(int c)
{
	l = c % 10;
	putchar(l);
	return (l);
}
