#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints n elements of a linked list
* @h: linked list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int i = 0;

	if (!(temp))
		return (1);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
