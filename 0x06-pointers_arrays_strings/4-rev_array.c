#include "main.h"
/**
 * reverse_array - function to reverse content of an array of integers
 * @a: array of integers
 * @n: count of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int elements, temp;

	n = n - 1;
	elements = 0;
	while (elements < n)
	{
		temp = a[elements];
		a[elements++] = a[n];
		a[n--] = temp;
	}
}
