#include "lists.h"
/**
* free_dlistint - frees a doubly linked list
* @head: 1st node of the linked list
*
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
