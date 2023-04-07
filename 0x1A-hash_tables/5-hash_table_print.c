#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
* @ht: the hash table to print
*
* Return: nothin
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	unsigned char comma_print = 1;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_print == 0)
				printf(", ");
			current_node = ht->array[i];
			while (current_node)
			{
				printf("'%s' : '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (current_node)
					printf(", ");
			}
			comma_print = 0;
		}
	}
	printf("}\n");
}
