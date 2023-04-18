#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - sjfvlnsds
 * @d: kdknvkd
 * @name: kfsvm
 * @age: fjdn
 * @owner: dfsfgsfg
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;

}
