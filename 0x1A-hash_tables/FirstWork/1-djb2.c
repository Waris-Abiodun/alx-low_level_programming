#include "hash_tables.h"

/**
 * hasg_djb2 - implement of the djb2 algorithm
 * @str: string that will generate hastable
 * Return: hash value
 * **/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
