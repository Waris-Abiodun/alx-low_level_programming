#include "hash_tables.h"

/**
 * hash_table_create - a function that create hash table
 * @size: the limit of our array
 * Return: null if failed else return the node
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *myHash =  NULL;

	myHash = malloc(sizeof(hash_table_t));
	if (myHash == NULL)
		return (NULL);
	myHash->size = size;
	myHash->array = malloc(sizeof(void *) * size);
	if ((myHash->array) == NULL)
	{
		free(myHash);
		return (NULL);
	}
	return (myHash);
}
