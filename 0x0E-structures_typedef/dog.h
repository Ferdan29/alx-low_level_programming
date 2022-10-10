#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that takes the details about a dog
 * @name: variable thay takes the name of the dog
 * @age: variable that takes the age of the dog
 * @owner: variable that takes the name of the owner of the dog
 *
 * Return: nothing
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
