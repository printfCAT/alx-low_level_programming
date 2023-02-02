#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - returns nth node of a linked list
* @head: head of linked list
* @index: position of nth node
*
* Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!(head))
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (!(head))
		return (NULL);
	return (head);
}
