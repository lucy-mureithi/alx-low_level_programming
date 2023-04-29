#include "main.h"

/**
 * print_most_numbers - Print 0 to 9
 * Description: Exclude 2 and 4
 * Return: Result
 */

void print_most_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
if (x == 0 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar ('\n');
}
