#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number -  input integer, prime number
 * @n: number value
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate number os prime numbers
 * @n: number value
 * @i: iterator
 * Return: 1 or 0
 */
int actual_prime(int n, int i)
{
if (i == 1)
	return (1);
if (n % 1 == 0 && i > 0)
	return (0);
return (actual_prime(n, n - 1));
}
