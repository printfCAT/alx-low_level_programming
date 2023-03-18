#include "lists.h"
/**
* dlistint_len - returns number of elements in a doubly linked list
* @h: head of the linked list
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
