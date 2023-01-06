#include "main.h"
/**
* support - finds prime number
* @a: number we are checking
* @b: number we are using to check
*
* Return: prime number
*/
int support(int a, int b)
{
	if (b  == a - 1)
		return (1);
	else if ((a % b) == 0)
		return (0);
	if ((a % b) != 0)
		return (support(a, b + 1));
	return (0);
}

/**
* is_prime_number - looks for prime numbers
* @n: integer to be checked
*
* Return: 1 if prime number. 0 otherwise
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (support(n, 2));
}
