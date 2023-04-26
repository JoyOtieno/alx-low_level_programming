#include "main.h"
/**
 * main - Entry point
 * Description: Print lowercase letters ten times.
 * Return: 0 (Success)
 */
void print_alphabet_x10(void);
{
	int n;

	while (n <= 57)
	{
		int m;

		while (m <= 122)
		{
			putchar(m);
			m++;
		}
		putchar('\n');
		n++;
	}
}
