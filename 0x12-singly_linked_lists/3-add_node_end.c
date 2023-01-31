#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds a node at the end of a linked list
* @head: 1st node of the linked list
* @str: content of the new node
*
* Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (!(new))
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
	new->len = i + 1;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
