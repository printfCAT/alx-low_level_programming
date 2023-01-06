#include "main.h"
/**
* is_prime_number - looks for prime numbers
* @n: integer to be checked
*
* Return: 1 if prime number. 0 otherwise
*/
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime_number(n + 1));
}
