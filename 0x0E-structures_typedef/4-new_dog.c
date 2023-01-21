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

	new_doggo = &new;
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_doggo = malloc(sizeof(dog_t));
	if (new_doggo == NULL)
		return (NULL);
	new_doggo->name = malloc(strlen(name) + 1);
	if (new_doggo->name == NULL)
		return (NULL);
	new_doggo->owner = malloc(strlen(owner) + 1);
	if (new_doggo->owner == NULL)
		return (NULL);
	for (int = 0; i < strlen(name); i++)
		new_doggo->age[i] = name[i];
	new_doggo->name[i] = '\0';
	new_doggo->age = age;
	for (i = 0; i < strlen(owner); i++)
		new_doggo->owner[i] = owner[i];
	new_doggo->owner[i] = '\0';

	return (new_doggo);
}
