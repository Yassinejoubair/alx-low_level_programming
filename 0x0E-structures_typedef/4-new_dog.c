#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *bobby;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	bobby = malloc(sizeof(dog_t));
	if (bobby == NULL)
	{
		free(bobby);
		return (NULL);
	}
	bobby->name = malloc(i * sizeof(bobby->name));
	if (bobby->name == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		bobby->name[k] = name[k];
	bobby->age = age;
	bobby->owner = malloc(j * sizeof(bobby->owner));
	if (bobby->owner == NULL)
	{
		free(bobby->owner);
		free(bobby->name);
		free(bobby);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		bobby->owner[k] = owner[k];
	return (bobby);
}
