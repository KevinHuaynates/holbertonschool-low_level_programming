#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with its attributes.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Typedef for struct dog as dog_t */
typedef struct dog dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */

