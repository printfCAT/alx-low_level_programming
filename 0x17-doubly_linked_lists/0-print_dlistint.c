#include "lists.h"
/**
* print_dlistint - prints all the elements of a doubly linked list
* @h: head of the linked list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp = h;

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
