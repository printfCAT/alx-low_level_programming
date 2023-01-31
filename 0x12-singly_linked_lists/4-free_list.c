#include <stdlib.h>
#include "lists.h"
/**
* free_list - frees a linked list
* @head: 1st node of a linked list
*
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
