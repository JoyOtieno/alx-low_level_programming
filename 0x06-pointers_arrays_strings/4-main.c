#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * print_array - Function that prints n elements of an integer array
 * @a: pointer of the first element of integer array
 * @n: the number of elements to print
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
	if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}
