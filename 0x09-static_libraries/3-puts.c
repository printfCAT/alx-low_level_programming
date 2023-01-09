#include "main.h"
/**
* _puts - prints a string followed by a newline to stdout
* @str: string being written
*
* Return: 0
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
