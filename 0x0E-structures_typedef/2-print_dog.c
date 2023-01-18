#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: variable ot type struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)");
		}
		else
			printf("Name: %s\n", d->name);

		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);

		if (!(d->age))
			printf("Age: (nil)");
		else
			printf("Age: %.1f\n", d->age);
	}
	else
	{

	}
}
