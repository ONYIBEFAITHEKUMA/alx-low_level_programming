#ifndef DOG_H
#define DOG_H

#include "main.h"
#include <stdlib.h>
/**
 * struct dog - function o be defined
 *
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif
