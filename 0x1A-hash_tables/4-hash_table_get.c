#include "hash_tables.h"
/**
* hash_table_get - retrieves value associated with a key
* @ht: the hash table
* @key: the key we are to retrive its value
*
* Return: the value of the key. NULL if unsuccessful
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht || key)
	{
		index = hash_djb2((unsigned char *)key) % ht->size;
		if (ht->array[index])
		{
			if (strcmp(ht->array[index]->key, key) == 0)
				return (ht->array[index]->value);
		}
	}
	return (NULL);
}
