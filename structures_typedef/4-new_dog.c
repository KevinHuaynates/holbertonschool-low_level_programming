#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *  * new_dog - creates a new dog
 *   * @name: name of the dog
 *    * @age: age of the dog
 *     * @owner: owner of the dog
 *      * Return: a pointer to the new dog
 *       */
dog_t *new_dog(char *name, float age, char *owner)
{
	    dog_t *dog;
	        char *name_copy, *owner_copy;

		    /* allocate memory for the dog structure */
		    dog = malloc(sizeof(dog_t));
		        if (dog == NULL)
				        return (NULL);

			    /* allocate memory for the name string and copy it */
			    name_copy = malloc(strlen(name) + 1);
			        if (name_copy == NULL)
					    {
						            free(dog);
							            return (NULL);
								        }
				    strcpy(name_copy, name);

				        /* allocate memory for the owner string and copy it */
				        owner_copy = malloc(strlen(owner) + 1);
					    if (owner_copy == NULL)
						        {
								        free(name_copy);
									        free(dog);
										        return (NULL);
											    }
					        strcpy(owner_copy, owner);

						    /* assign the fields of the dog structure */
						    dog->name = name_copy;
						        dog->age = age;
							    dog->owner = owner_copy;

							        /* return the pointer to the new dog */
							        return (dog);
}
