#include "main.h"
/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character
 * @str: string to be checked
 * Returns nothing
 */
void puts2(char *str)
{
	int q = 0;

	while (str[q] != '\0')
	{
		if (q % 2 == 0)
		{
			_putchar(str[q]);
		}
		q++;
	}
	_putchar('\n');
}
