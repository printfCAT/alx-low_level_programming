#include "main.h"
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
	int i = 0, len = 0;

	while (dest[i])
	{
		i++;
		len++;
	}
	for (i = 0; src[i]; i++)
	{
		if (*src < n)
			dest[len++] = src[i];
		else
		{
			dest[len++ + 1] = src[i];
		}
	}
	return (dest);
}
