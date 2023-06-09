#include "main.h"
/**
 * times_table - Prints times table nine times
 */
void times_table(void)
{
	int num, multiplier, product;

	for (num = 0; num < 10; num++)
	{
		for (multiplier = 0; multiplier < 10; multiplier++)
		{
			product = num * multiplier;
			if (multiplier == 0)
			{
				_putchar(product + '0');
			}
			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
