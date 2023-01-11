#include "main.h"
#include <stdlib.h>
/**
* _strlen - finds the length of string
* @s: steing we are finding length of
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* str_concat - concatenates 2 strings
* @s1: 1st string
* @s2: 2nd string
*
* Return: pointer to concatenated string. NULL otherwise
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	unsigned int size;
	char *c;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	size = _strlen(s1) + _strlen(s2) + 1;
	c = malloc(sizeof(char) * size);
	if (c == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		c[i] = s2[j];
		i++;
	}
	return (c);
}
