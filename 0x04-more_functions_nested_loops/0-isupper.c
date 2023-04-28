#include "main.h"

/**
 * _isupper - Alphabet characters
 * @c:The character check
 *
 * Return: 0 or 1
 *
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
