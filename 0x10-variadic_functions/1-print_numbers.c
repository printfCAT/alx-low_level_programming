#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers in the argument list
* @separator: charcater to be printed between numbers
* @n: number of integers pased to the function
*
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if ((separator) && (i + 1 != n))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
