#include "dog.h"

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
		return (NULL);
	newdog->name = malloc(i * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(j * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	for (k = 0; k <= i; k++)
		newdog->name[k] = name[k];
	for (k = 0; k <= j; k++)
		newdog->owner[k] = owner[k];
	return (newdog);
}
