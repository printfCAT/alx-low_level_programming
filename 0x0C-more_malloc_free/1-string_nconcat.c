#include "main.h"
#include <stdlib.h>
/**
* _strlen - finds length of string
* @c: string we are finding length for
*
* Return: length of c
*/
int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
* _strnlen - finds length of string upto n
* @c: string we are finding length for
* @n: point we are finding length to
*
* Return: length of c
*/
int _strnlen(char *c, int n)
{
	int i = 0;

	while (c[i] != '\0' && i < n)
		i++;
	return (i);
}

/**
* string_nconcat - concatenates 2 strings to point n
* @s1: string 1
* @s2: string 2
* @n: point we are finding length to
*
* Return: pointer to newly allocated space. NULL otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	unsigned int size;
	char *c;

	k = n;
	size = _strlen(s1) + _strnlen(s2, n) + 1;
	c = malloc(sizeof(char) * size);
	if (c == 0)
		return (NULL);
	for (i = 0; *(s1 + i)  != '\0'; i++)
		*(c + i) = *(s1 + i);
	for (j = 0; s2[j] != '\0' && j < k; j++)
	{
		*(c + i) = *(s2 + j);
		i++;
	}
	if (c == NULL)
		c = "";
	return (c);
}
