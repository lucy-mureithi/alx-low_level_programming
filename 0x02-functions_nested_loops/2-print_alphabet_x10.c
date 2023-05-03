#include "main.h"

/**
 * print_alphabet - print 10 times the alphabet
 * @c: char to be checked
 * Description: lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
int i = 0;
char c;

while (i++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
