#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything
* @format: list of strings to print
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n, flag;
	char ch;
	const char *str;
	float a;

	va_start(ap, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				ch = (char)va_arg(ap, int);
				printf("%c", ch);
				flag = 0;
				break;
			case 'i':
				n = va_arg(ap, int);
				printf("%d", n);
				flag = 0;
				break;
			case 'f':
				a = (float)va_arg(ap, double);
				printf("%f", a);
				flag = 0;
				break;
			case 's':
				str = va_arg(ap, const char *);
				if (str == NULL)
				{
					printf("(nil)");
					flag = 0;
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag != 1)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(ap);
}
