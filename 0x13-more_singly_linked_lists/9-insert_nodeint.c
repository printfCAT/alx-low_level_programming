#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at given index
* @head: 1st node of linked list
* @idx: index for insertion at linked list
* @n: content to be inserted in new node
*
* Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	if (!(*head))
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		while (temp && i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		if (!(temp))
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!(new))
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
