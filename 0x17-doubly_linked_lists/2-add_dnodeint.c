#include "lists.h"
/**
* add_dnodeint - adds a new node at the beginning of a doubly linked list
* @head: head of the linked list
* @n: data to be added to the new node
*
* Return: address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
