#include "hash_tables"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *myHash = NULL;
    myHash->array = malloc(size + 1);
    if ((myHash->array) == NULL)
    {
        return (NULL);
    }
    return (myHash);
}