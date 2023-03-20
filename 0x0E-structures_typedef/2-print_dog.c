#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: dog structure
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n";
if (d->age <= 0)
else
printf("Name: %s\n", d->name);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
