#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: size of memory
*
* Return: pointer to allocated memory. 98 otherwise
*/
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(sizeof(char) * b);
	if (c == NULL)
		exit(98);
	return (c);
}
