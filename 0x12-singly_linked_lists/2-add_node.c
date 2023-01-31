#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_node - adds a node at the beginning of a linked list
* @head: pointer to 1st node of a linked list
* @str: content to be added to the new node
*
* Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
	new->len = i + 1;
	new->next = *head;
	*head = new;

	return (new);
}
