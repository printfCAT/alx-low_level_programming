#include "lists.h"
/**
* reverse_listint - reverses a linked list
* @head: head of the linked list
*
* Return: pointer to 1st node of linked list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	if (!(head) || !(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);
	previous = NULL;
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;

	}
	*head = previous;

	return (*head);
}
