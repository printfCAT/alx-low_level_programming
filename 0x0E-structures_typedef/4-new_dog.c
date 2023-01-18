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
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == 0)
		return (NULL);
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == 0)
		return (NULL);
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
