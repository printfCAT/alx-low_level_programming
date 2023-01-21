#include "dog.h"
#include <stdlib.h>
/**
* _strlen - a function to print the length of a string
* @s: string to be supplied
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcpy - function copies string pointed to src and dest
* @dest: Pointer parameter
* @src: poiter parameter
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		dest[i] = *(src + i);
	dest[i] = '\0';

	return (dest);
}

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
	dog_t new_dog, *new_doggo;

	new_doggo = &new_dog;
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_doggo = malloc(sizeof(dog_t));
	if (new_doggo == NULL)
		return (NULL);
	new_doggo->name = malloc(_strlen(name) + 1);
	if (new_doggo->name == NULL)
		return (NULL);
	new_doggo->owner = malloc(_strlen(owner) + 1);
	if (new_doggo->owner == NULL)
		return (NULL);
	new_doggo->name = _strcpy(new_doggo->name, name);
	new_doggo->age = age;
	new_doggo->owner = _strcpy(new_doggo->owner, owner);
	return (new_doggo);
}
