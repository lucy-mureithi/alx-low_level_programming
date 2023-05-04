#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: *s1 - *s2
 * If str1 == str2, 0,
 * if str1 > str2, the posuitive difference of the unmatched character
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
