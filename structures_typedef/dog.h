#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that creates a new type describing a dog
 * @name: type char * representing the name of the dog
 * @age: type float representing the age of the dog
 * @owner: type char * representing the owner of the dog
 *
 * Description: This structure stores the basic profile of a dog,
 * including its identity, age, and ownership details.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
