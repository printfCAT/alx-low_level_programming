#include "main.h"
/**
* puts_half - prints half of a string followed by new line
* @str: string to print half of
*
* Return: nothing
*/
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (i = n; i < len; i++)
		_putcher(str[i]);

	_putchar('\n');
}
