#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the newly created dog_t structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

/* Allocate memory for the new dog */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate memory for the name and owner and copy the data */
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
/* Assign the age */
new_dog->age = age;
return (new_dog);
}
