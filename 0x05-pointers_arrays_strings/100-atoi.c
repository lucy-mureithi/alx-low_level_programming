#include "main.h"

/**
 * _atol - Convert string to integer
 * @s: The pointer to convert
 * Return: 0
 */

int _atoi(char *s)
{
int c = 0;
int n = 0;
int x = 1;

while ((s[c]  < '0' || s[c] > '9') && s[c] != 0)
{
if (s[c] == '-')
	x *= -1;
c++;
}
while ((s[c] >= '0' && s[c] <= '9') && s[c] != 0)
{
if (n >= 0)
{
n = n * 10 - (s[c] - '0');
c++;
}
else
{
n = n * 10 - (s[c] - '0');
i++;
}
}
x *= -1;
return (n * x);
}
