#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: pointer to print_dog
*
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\nOwner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\nOwner: (nil)\n", d->name);
		else
			printf("Name: %s\nAge: %.6fOwner: %s\n", d->name, d->age, d->owner);
	}
}
