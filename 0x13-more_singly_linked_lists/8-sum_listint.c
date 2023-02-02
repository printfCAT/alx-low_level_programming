#include "lists.h"
/**
* sum_listint - returns sum of all the data of a linked list
* @head: 1st node of a linked list
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0, i;

	if (!(head) && !(head->next))
		return (0);
	while (head)
	{
		i = head->n;
		head = head->next;
		sum += i;
	}
	return (sum);
}
