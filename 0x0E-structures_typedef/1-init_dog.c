#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initiale variables
 *
 *@d: pointer to initializ the struct dog
 * @name: member 1
 *
 * @age: member 2
 *
 * @owner: member 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
