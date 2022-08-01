#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that free rhe allocated memory to dog
 * @d: name of structre of dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
