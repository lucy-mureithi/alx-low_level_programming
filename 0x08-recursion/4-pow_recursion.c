#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y.
 * @x: input value
 * @y: input value
 * Return: 0 or -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}
