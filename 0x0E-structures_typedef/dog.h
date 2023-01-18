#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - name of the struct
 * Description: struct with attributes of dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * dog_t - typedef for struct dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
