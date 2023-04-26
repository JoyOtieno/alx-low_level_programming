#include "main.h"
/**
 * print_to_98 - prints natural numbers up to ninety eight
 * @n: Starting number
 */
void print_to_98(int n);
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n--);
		}
		printf("%d, ", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n++);
		}
		printf("%d, ", n);
	}
}
