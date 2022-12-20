#include "main.h"
/**
* print_rev - prints a string in reverse followed by a new line
* @s: string we are printing in reverse
*
* Return: nothing
*/
void print_rev(char *s)
{
	char temp;
	int i = 0, j = 0;

	j = _strlen(s) - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
	}
	_putchar('\n');
}
