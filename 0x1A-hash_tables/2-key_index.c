#include "hash_tables.h"

/**
 * key_index - a function that use the hash function to calculate the key
 * @key: the string that will be used to calculate the hash
 * @size: this will be use as modulos 
 * Return: the key index of the string 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
