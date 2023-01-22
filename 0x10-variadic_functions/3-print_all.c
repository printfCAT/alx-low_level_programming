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
	int flag;

	va_start(ap, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double);
				flag = 0;
				break;
			case 's':
				if (str == NULL)
				{
					printf("(nil)");
					flag = 0;
					break;
				}
				printf("%s", va_arg(ap, char *));
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
