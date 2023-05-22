#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name:pointer to dog name
 * @age:float
 * @owner:pointer to dog owner
 * Return:new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (i + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (j + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		free(newdog->owner);
		return (NULL);
	}
	newdog->age = age;
	for (k = 0; k <= i; k++)
		newdog->name[k] = name[k];
	for (k = 0; k <= j; k++)
		newdog->owner[k] = owner[k];
	return (newdog);
}
