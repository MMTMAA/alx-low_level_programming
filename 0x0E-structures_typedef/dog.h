#ifndef DOG_H
#define DOG_H
/**
 * struct dog - jsvlkdf
 * @name: fnvkfn
 * @age: knv
 * @owner: skvnksdn
 */
struct dog
{
char *name;
float age;
char *owner
};

typedef struct dog D;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
