#include "main.h"
/**
* _strchr - locates a character in a string
* @s: string we're checking in
* @c: character we're checking for
*
* Return: pointer to character if found. NULL otherwise
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return ('\0');
}
