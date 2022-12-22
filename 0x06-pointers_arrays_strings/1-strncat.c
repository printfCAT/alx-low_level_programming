#include "main.h"
#include <stdio.h>
/**
* _strncat - concatenates 2 strings leaving null terminator
* @dest: string 1
* @src: string 2
* @n: number of bytes required
*
* Return: pointer to resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[n + i] = '\0';

	return (dest);
}
