#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: hash table to delet
*
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int long i;
	hash_node_t *current_node, *next_node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array)
		{
			current_node = ht->array[i];
			while (current_node)
			{
				next_node = current_node;
				current_node = current->next;
				free(next_node->key);
				free(next_node->value);
				free(next_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
