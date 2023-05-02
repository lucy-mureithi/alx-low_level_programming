#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n element of an array of integer
 * @a: Array of integers
 * @n: Number of elements of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < 1; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf("%d", a[n - 1]);
}
}
printf("\n");
}
