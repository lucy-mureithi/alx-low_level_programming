#include "main.h"

/**
 * print_alphabet - print 10 times the alphabet.
 *@ch: char to be checked
 * Description: lowercase followed by new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar (ch);
ch++;
}
_putchar('\n');
}
}
