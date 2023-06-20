#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - frees dogs
 * @d: the struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
