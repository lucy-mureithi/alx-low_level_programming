#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: name of element
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
	d->name = "(nil)";
if (d->owner == NULL)
	d->name = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
