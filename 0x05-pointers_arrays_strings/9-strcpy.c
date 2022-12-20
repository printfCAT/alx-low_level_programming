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
	int i = 0, c = 0;

	while (*src)
	{
		src++;
		c++;
	}
	for (i = 0; i < c; i++)
		src--;
	for (i = 0; i < c; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
