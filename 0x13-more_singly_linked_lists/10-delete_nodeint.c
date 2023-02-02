#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at index
* @head: 1st node of linked list
* @index: specifies position of node
*
* Return: 1 if successful. -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *current;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	temp = *head;
	if (!(temp->next))
		return (-1);
	while (temp->next && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!(temp))
		return (-1);

	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
