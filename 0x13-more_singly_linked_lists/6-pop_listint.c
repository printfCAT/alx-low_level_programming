#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes head of a linked list
* @head:head of the linked list
*
* Return: head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!(*head))
		return (0);

	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);
	return (i);
}
