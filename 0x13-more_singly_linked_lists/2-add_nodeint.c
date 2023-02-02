#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint - adds a node at the beginning of a linked list
* @head: pointer to 1st node of a linked list
* @n: content to be added to the new node
*
* Return: address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
