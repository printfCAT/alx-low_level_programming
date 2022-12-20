#include "main.h"
/**
* puts_half - prints half of a string followed by new line
* @str: string to print half of
*
* Return: nothing
*/
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i > (len / 2); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
