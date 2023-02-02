#include <stdlib.h>
#include "lists.h"
/**
* free_listint - frees a linked list
* @head: 1st node of a linked list
*
* Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!(*head))
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
