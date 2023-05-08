#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: integer matrix
 * @size: size of a
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, bytes;

	for (bytes = 0; bytes < size; bytes++)
	{
		sum1 += a[bytes];
		a += size;
	}
	a -= size;
	for (bytes = 0; bytes < size; bytes++)
	{
		sum2 += a[bytes];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
