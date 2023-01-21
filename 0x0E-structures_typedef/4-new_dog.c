#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - creates a new dog
* @name: name of new dog
* @age: age of new dog
* @owner: owner of new dog
*
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new, *new_doggo;
	int i, len_name, len_owner;

	new_doggo = &new;
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_doggo = malloc(sizeof(dog_t));
	if (new_doggo == NULL)
	{
		free(new_doggo);
		return (NULL);
	}
	len_name = strlen(name);
	new_doggo->name = malloc(len_name + 1);
	if (new_doggo->name == NULL)
	{
		free(new_doggo);
		free(new_doggo->name);
		return (NULL);
	}
	len_owner = strlen(owner);
	new_doggo->owner = malloc(len_owner + 1);
	if (new_doggo->owner == NULL)
	{
		free(new_doggo);
		free(new_doggo->owner);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		new_doggo->name[i] = name[i];
	new_doggo->name[i] = '\0';
	new_doggo->age = age;
	for (i = 0; i < len_owner; i++)
		new_doggo->owner[i] = owner[i];
	new_doggo->owner[i] = '\0';

	return (new_doggo);
}
