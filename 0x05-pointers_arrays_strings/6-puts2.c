#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: THe string to be treated
 * Return: void
 */

void puts2(char *str)
{
int longi = 0;
int j = 0;
char *y = str;
int p;

while (*y != '\0')
{
y++;
longi++;
}
j = longi - 1;

for (p = 0; p <= j; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}
