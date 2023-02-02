#include <stdio.h>
#include "lists.h"
/**
* listint_len - returns the number of elements in a linked list
* @h: linked list
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
