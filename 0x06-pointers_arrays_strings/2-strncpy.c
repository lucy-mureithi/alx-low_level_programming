#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0, k = 0;
while (src[j++])
	k++;
for (j = 0; src[j] && j < n; j++)
	dest[j] = src[j];
for (j = k; j < n; j++)
dest[j] = '\0';
j++;
return (dest);
}
