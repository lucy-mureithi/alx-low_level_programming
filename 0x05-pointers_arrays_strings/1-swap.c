#include <stdio.h>

/**
 * swap_int - Swap the values of two integers.
 * @a: thei first swapped integer.
 * @b: the second swapped integer.
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
