#include <stdlib.h>
#include <dog.h>

/**
 * init_dog - calling function
 * @d: array
 * @name: the name of the dog
 * @age: the age of the dog to be input and returned
 * @owner: owner of the dog to be input and returned as a pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
	{
		return;
	}
	else
	{

		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}

}
