#include "main.h"
/**
 * print_alphabet_x10 - Repeat printing alphabet ten times
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 10)
	{
		int m = 97;

		while (m <= 122)
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
