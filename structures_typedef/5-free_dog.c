#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to the dog_t struct to be freed
 *
 * Description: This function frees the memory allocated for the
 * name and owner strings, and then frees the struct itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for the strings first */
		free(d->name);
		free(d->owner);
		/* Finally, free the memory allocated for the struct */
		free(d);
	}
}
