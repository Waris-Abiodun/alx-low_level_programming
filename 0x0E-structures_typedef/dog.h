#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The struct of dog
 * @name: The name o the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: An header function to beuse with all this code
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
