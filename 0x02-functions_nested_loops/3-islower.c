#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: char to be checked
 * Return: 1 for lowercase
 * 0 if otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
