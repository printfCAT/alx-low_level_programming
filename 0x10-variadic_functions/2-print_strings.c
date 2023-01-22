#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings followed by a new line
* @separator: string printed between strings
* @n: number of strings passed
*
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, const char*);
		if (!c)
			printf("nil");
		else
			printf("%s", c);
		if ((separator) && (i + 1 != n))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
