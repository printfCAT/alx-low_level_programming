#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position in a doubly linked list
* @h: 1st node of the linked list
* @idx: position to insert new node
* @n: data for the new node
*
* Return: address of new node. NULL if unsuccessful
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!*h || !new)
		return (NULL);
	new->n = n;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
		if (!temp)
			return (NULL);
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return(new);
}
