#include "hash_tables.h"
/**
 * hash_table_get : retrieving the data stored in the hash table
 * @ht: the hash table
 * @key is a string that will be use as string
 * Return: the data if found and NULL if not found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node = NULL;

	if(ht == NULL || key == NULL)
		return NULL;
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while(node != NULL)
	{
		if(strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return NULL;
}
