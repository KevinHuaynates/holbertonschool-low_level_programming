#include <stdio.h>
#include "dog.h"


void print_dog(struct dog *d)
{
	    if (d != NULL) {
		            printf("Nombre: %s\n", d->name != NULL ? d->name : "(nil)");
			            printf("Edad: %.6f\n", d->age);
				            printf("Propietario: %s\n", d->owner != NULL ? d->owner : "(nil)");
					        }
}

