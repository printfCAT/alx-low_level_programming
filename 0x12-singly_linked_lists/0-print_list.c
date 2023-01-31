#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - prints all the elements of a list
* @h: list containing elements
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if(!(h->str))
 			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
