#include "main.h"

/**
 * _puts - Print a string
 * @str: The string to print
 * Return: 0
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

