#include "main.h"
/**
* rev_string - reverses a string
* @s: sting being reversed
*
* Return: nothing
*/
void rev_string(char *s)
{
	int i = 0;

	while (*s)
	{
		*s++;
		i++;
	}
	while (i)
	{
		*s--;
		i--;
	}
}
