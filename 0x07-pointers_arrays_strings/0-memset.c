#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes
 * @s: destination pointed
 * @b: constant value
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
