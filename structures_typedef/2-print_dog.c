#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	    if (d != NULL) {
  printf("Nombre: %s\n", d->nombre != NULL ? d->nombre : "(nil)");
  printf("Edad: %.6f\n", d->edad);
  printf("Propietario: %s\n", d->propietario != NULL ? d->propietario : "(nil)");
					        }
}i
