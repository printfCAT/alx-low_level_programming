#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds a node at the end of a linked list
* @head: 1st node of the linked list
* @n: content of the new node
*
* Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
