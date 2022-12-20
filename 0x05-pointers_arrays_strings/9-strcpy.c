#include "main.h"
/**
* _strcpy - copying string from one buffer to another buffer
* @dest: pointer 1
* @src: pointer 2
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, len;

	while (*src)
	{
		src++;
		len++;
	}
	for (i = 0; i < len; i++)
		src--;
	for (i = 0; i < len; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
