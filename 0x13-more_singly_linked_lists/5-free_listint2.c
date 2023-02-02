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
	if (!(*head))
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
