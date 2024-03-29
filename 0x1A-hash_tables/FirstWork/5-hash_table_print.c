#include "hash_tables.h"

/**
 * hash_table_print - print all the hastable
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0, j = 0;
	
	if(ht != NULL)
	{
		printf("{");
		for(i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (j !=  0)
					printf(", ");
				j = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
