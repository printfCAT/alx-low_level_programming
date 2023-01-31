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
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp)
	{
		if (!(temp->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
