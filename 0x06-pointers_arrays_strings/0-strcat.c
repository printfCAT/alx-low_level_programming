#include "main.h"
/**
* _strcat - concatenates 2 strings
* @dest: string 1
* @src: string 2
*
* Return: pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0, len;

	while (*dest)
	{
		dest++;
		c++;
	}
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[c + 1] = src[i];
		c++;
	}
	return (dest);
}
