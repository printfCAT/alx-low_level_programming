#include "main.h"
/**
* puts_half - prints half of a string followed by new line
* @str: string to print half of
*
* Return: nothing
*/
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (len / 2)
	{
		_putchar(str[len / 2]);
		(len / 2)++;
	}
	_putchar('\n');
}
