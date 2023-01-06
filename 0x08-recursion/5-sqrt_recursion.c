#include "main.h"
/**
* support - find root of a number
* @a: number we are finding root for
* @b: test number
*
* Return: square root
*/
int support(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (support(a, b + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
* @n: number we're finding root
*
* Return: -1 if no natural root. natural root otherwise
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (support(n, 1));
}
