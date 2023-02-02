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
	int i;

	if (!(*head) && !((*head)->next))
		return (0);
	i = (*head)->n;
	free(*head);
	return (i);
}
