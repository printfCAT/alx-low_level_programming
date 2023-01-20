#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to be printed
* @f: pointer to funtion used for printing name
*
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
