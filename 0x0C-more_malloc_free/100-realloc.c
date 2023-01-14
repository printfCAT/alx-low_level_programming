#include "main.h"
#include <stdlib.h>
/**
* _realloc - reallocates memory using malloc & free
* @ptr: pointer to old size
* @old_size: old memory allocated previously
* @new_size:new memory we are going to allocate
*
* Return: pointer to new memory if successful
* pointer to old memory or NULL otherwise
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new, *old;

	old = ptr;
	if (old == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	if (new_size == 0)
	{
		free(old);
		return (NULL);
	}
	if (new_size == old_size)
		return (old);
	new = malloc(new_size);
	if (new == 0)
		return (NULL);
	if (new_size > old_size)
		return (new);
	for (i = 0; i < old_size; i++)
		new[i] = old[i];
	free(old);
	return (new);
}
