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

typedef struct dog dog_t;
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
