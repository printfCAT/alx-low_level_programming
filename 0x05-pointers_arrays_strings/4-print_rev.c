#include "main.h"
/**
* print_rev - prints a string in reverse followed by a new line
* @s: string we are printing in reverse
*
* Return: nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}
	while (i)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
