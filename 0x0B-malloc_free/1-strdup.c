#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - finds length of string s
* @s: string we're finding length of
*
* Return: length of s
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcpy - copies string from src to dest
* @src: string we are copying from
* @dest: string we are copying to
*
* Return: copied string
*/
int _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (*dest);
}

/**
* _strdup - returns a pointer to a newly
* allocated space in memory
* @str: string whose copy will be pointed
*
* Return: pointer to duplicated string. NULL otherwise
*/
char *_strdup(char *str)
{
	char *c;
	unsigned int size;

	if (str == 0)
		return (NULL);
	size = _strlen(str) + 1;
	c = malloc(sizeof(char) * size);
	if (c == 0)
		return (NULL);
	_strcpy(c, str);
	return (c);
}
