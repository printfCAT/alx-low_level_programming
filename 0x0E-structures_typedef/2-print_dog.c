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
	if (d->name == NULL)
		printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
	else if (d->age == 0)
		printf("Name: %s\nAge: (null)\nOwner: %s\n", d->name, d->owner);
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %.6f\nOwner: (null)\n", d->age, d->owner);
	else
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
