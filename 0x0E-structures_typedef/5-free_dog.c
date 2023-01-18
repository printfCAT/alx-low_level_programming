#include <stdlib.h>
#include "dog.h"
/**
* free dog - frees dogs
* @d: pointer to dog
*
* Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
