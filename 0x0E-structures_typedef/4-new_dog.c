#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: name of the new dog
* @age: age of new dog
* @owner: owner of new dog
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggo;
	int len_name, len_owner;

	new_doggo = malloc(sizeof(*new_doggo));
	if (new_doggo == NULL || name == NULL || owner == NULL)
	{
		free(new_doggo);
		return (NULL);
	}
	len_name = strlen(name);
	new_doggo->name = malloc(len_name + 1);
	if (new_doggo->name == NULL)
	{
		free(new_doggo->name);
		free(new_doggo);
		return (NULL);
	}
	len_owner = strlen(owner);
	new_doggo->owner = malloc(len_owner + 1);
	if (new_doggo->owner == NULL)
	{
		free(new_doggo->owner);
		free(new_doggo);
		return (NULL);
	}
	new_doggo->name = strcpy(new_doggo->name, name);
	new_doggo->age = age;
	new_doggo->owner = strcpy(new_doggo->owner, owner);

	return (new_doggo);
}
