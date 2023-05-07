#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet
 * description: Lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
