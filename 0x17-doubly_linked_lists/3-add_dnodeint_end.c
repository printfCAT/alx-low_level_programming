#include "lists.h"
/**
* add_dnodeint_end - adds a node at the end of a doubly linked list
* @head: head of the linked list
* @n: data to be added to new node
*
* Return: address of new node. NULL if unsuccessful
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	temp = new;

	return (new);
}
