#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - finds sum of all its parameters
* @n: number of parameters passed
*
* Return: sum if successful. 0 otherwise
*/
#include <stdio.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	if (n == 0)
	{
		va_end(ap);
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
