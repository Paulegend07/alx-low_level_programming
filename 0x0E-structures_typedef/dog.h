#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: pointer to character array(string)
 * @age: integer
 * @owner: pointer to character array(string)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
