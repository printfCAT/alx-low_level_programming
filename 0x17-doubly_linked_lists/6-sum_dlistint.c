#include "lists.h"
/**
* sum_dlistint - returns the sum of all data of a doubly linked list
* @head: 1st node of the linked list
*
* Return: sum of all data. 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int add = 0;
	dlistint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
