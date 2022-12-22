#include "main.h"
/**
* _strncpy - copies a string
* @dest: string 1
* @src: string 2
* @n: number of bytes
*
* Return: pointer to copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i])
	{
		i++;
		j++;
	}
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
