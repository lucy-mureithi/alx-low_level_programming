#include "main.h"
#include <stdio.h>

/**
 * main - Print Fizz Buzz
 * Return: o
 */

int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
	if (x % 3 == 0)
		printf("Fizz");
		else if (x % 5 == 0)
		printf("Buzz");
		else if (x % 15 == 0)
		printf("FizzBuzz");
		else
		printf("%x", x);
		if (x < 100)
		printf(" ");
}
printf("\n");
return (0);
}

