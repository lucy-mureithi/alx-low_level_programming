#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: value
 * @max: value
 * Return: int value
 */
int *array_range(int min, int max)
{
int *a;
if (min > max)
	return (NULL);

a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
	return (NULL);

}
