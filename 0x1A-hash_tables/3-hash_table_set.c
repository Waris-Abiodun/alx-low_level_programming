#include "hash_tables.h"
/**
 * hash_table_set - a function that set or update the value of a key
 * Description : the first if is use to update the value of a key,
 * if the key has already existed, the else wil key create a new key
 * assigned t value and add it to previous or new node if a node is 
 * existing or not respectively
 * @ht: the hash table to be updated
 * @key: the string we will use to generate key
 * @value: the value we want to assigned to our key by
 * copying the address
 * Retun: 1 on sucess , 0 on Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->key[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = value;
		return (1);
	
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node = NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;

		return (1);

	}
	
}
