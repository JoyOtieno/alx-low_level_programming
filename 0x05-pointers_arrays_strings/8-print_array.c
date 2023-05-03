#include <stdio.h>
/**
 * print_array -  function that prints elements of an inte array
 * @a: integer pointer
 * @n: array lenght
 */
void print_array(int *a, int n)
{
	int elements_num;

	for (elements_num = 0; elements_num < n; elements_num++)
	{
		printf("%d", a[elements_num]);
		if (elements_num != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	putchar('\n');
}
