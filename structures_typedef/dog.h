#ifndef DOG_H
#define DOG_H

struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *nombre, float edad, char *propietario);

#endif

