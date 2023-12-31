#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - frees a dog
 *   * @d: pointer to the dog to free
 *    */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* free the name string */
free(d->name);
/* free the owner string */
free(d->owner);
/* free the dog structure */
free(d);
}
}
