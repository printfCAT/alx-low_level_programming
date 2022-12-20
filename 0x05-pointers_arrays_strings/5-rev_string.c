#include "main.h"
/**
* rev_string - reverses a string
* @s: string being reversed
*
* Return: nothing
*/
void rev_string(char *s)
{
	int i = 0, c = 0, last;
	char temp;

	while (*s)
	{
		s++;
		i++;
	}
	for (i = 0; i < c; i++)
	{
		s--;
	}
	for (i = 0; i < (c / 2); i++)
	{
		last = c - 1;
		temp = s[last - i];
		s[last - i] = s[i];
		s[i] = temp;
	}
}
