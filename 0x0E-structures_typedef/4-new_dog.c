#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k = 0, l = 0, n = 0, o = 0;
	dog_t *new_dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (i + 1));
		if (new_dog->name == NULL)
			return (NULL);
	while (name[l] != '\0')
	{
		new_dog->name[k] = name[l];
		k++;
		l++;
	}
	new_dog->owner = malloc(sizeof(char) * (j + 1));
		if (new_dog->owner == NULL)
			return (NULL);
	while (owner[n] != '\0')
	{
		new_dog->owner[n] = owner[o];
		n++;
		o++;
	}
	new_dog->age = age;
	return (new_dog);
}
