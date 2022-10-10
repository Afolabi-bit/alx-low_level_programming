#ifndef _HEADER_
#define _HEADER_

void init_dog(struct dog *d, char *name, float age, char *owner);
/*
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/

/**
 * struct dog - Info about a dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner's name
 *
 * Description: Stores a dog's basic info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
