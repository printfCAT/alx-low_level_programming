#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory and initializes it to 0
* @nmemb: number of elements
* @size: size to allocate
*
* Return: pointer to allocated memory. NULL otherwise
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (size == 0 || nmemb == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;
	return (c);
}
