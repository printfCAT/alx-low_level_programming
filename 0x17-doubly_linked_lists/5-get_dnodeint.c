#include "lists.h"
/**
* get_dnodeint_at_index - returns nth node of a doubly linked list
* @head: 1st node of the linked list
* @index: position of node we are to return
*
* Return: nth node. NULL if unsuccessful
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
