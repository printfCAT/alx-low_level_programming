#include "main.h"
/**
* factorial - returns factorial of a given number
* @n: nunber we are finding factorial
*
* Return: -1 if less than 0. factorial of n otherwise
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
