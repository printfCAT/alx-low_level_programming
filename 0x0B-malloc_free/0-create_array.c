#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates array of chars &
* initializes it with a specific char
* @size: size provided in bytes
* @c: specific char to be used in initialization
*
* Return: NULL if size is 0. pointer to array otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *ca;
	int i, s;

	s = size;
	if (s == 0)
		return (NULL);
	ca = malloc(s * sizeof(char));
	if (ca == 0)
		return (NULL);
	for (i = 0; i < s; i++)
		ca[i] = c;
	return (ca);
}
