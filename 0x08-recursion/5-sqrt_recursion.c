#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of n
* @n: number we're finding root
*
* Return: -1 if no natural root. natural root otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (_sqrt_recursion(n - 1));
}
