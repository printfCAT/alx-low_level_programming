#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to memory area
* @b:constant byte we're filling on the memory area
* @n: the size of memory area we're filling
*
* Return: pointer to memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	j = n;
	for (i = 0; i < j; i++)
		s[i] = b;

	return (s);
}
