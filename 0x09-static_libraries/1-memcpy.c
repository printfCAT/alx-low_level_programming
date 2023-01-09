#include "main.h"
/**
* _memcpy - copies a memory area
* @src: memory area we are copying from
* @dest: memory area we are copying to
* @n: we're copying to this point
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
		dest[i] = src[i];

	return (dest);
}
