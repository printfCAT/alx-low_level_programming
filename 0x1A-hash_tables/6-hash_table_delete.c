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

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current_node = ht->array[i];
			while (current_node)
			{
				next_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = next_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}