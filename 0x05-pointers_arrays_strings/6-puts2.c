#include "main.h"
/**
* puts2 - prints every other character of a string, starting with the 1st
* character followed by a new line
*@str: string to print its characters
*
* Return: nothing
*/
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
