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
	int i = 0, len = 0;

	while (dest[i])
	{
		i++;
		len++;
	}
	i = 0;
	for (i = 0; i < len; i++)
	{
		if (len < n)
			src[i] = dest[i];
		else
			src[i] = dest[i];
	}
	return (dest);
}
