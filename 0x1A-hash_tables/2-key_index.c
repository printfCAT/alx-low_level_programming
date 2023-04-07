#include "hash_tables.h"
/**
* key_index - returns the index of a key
* @key: a string whose index we're looking for
* @size: size of the array of the hash table
*
* Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int h_value = hash_djb2(key);

	return (h_value % size);
}
