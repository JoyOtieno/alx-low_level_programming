#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100 and a new line
 * Fizz for multiples of 3, buzz for multiples of 5
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");

		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
