#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at given index
* in a doubly linked list
* @head: 1st node of the linked list
* @index: position of node we're deleting
*
* Return: 1 if successful. -1 if unsuccessful
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
		if (!temp)
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
