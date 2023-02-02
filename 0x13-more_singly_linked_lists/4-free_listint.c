#include <stdlib.h>
#include "lists.h"
/**
* free_listint - frees a linked list
* @head: 1st node of a linked list
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
