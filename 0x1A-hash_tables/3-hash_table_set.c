#include "hash_tables.h"
/**
* hash_table_set - inserts an element to the hash table
* @ht: the hash table we are adding the element to
* @key: key of the element
* @value: value of the element
*
* Return: 1 if successful. 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index = 0;

	if (!ht || !key)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	if (!item->key || !item->value)
	{
		free(item);
		return (0);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);

	index = hash_djb2((unsigned char *)key) % ht->size;
	if (!ht->array[index])
		ht->array[index] = item;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			item->next = ht->array[index];
			ht->array[index] = item;
		}
	}
	return (1);
}
