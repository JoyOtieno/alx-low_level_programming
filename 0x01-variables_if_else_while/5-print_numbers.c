#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing all numbers of base ten.
 * Return: 0 (Success)
 */
int main(void)
{
	int m;

	while (m < 10)
	{
		printf("%d", m);
		m++;
	}
	putchar('\n');
	return (0);
}
