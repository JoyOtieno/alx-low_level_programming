#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string to print half of it
 * Returns: half of str
 */
void puts_half(char *str)
{
	int fullS, halfS;

	fullS = 0;
	while (str[fullS] != '\0')
	{
		fullS++;
	}
	halfS = fullS / 2;
	if (fullS % 2 == 1)
	{
		halfS++;
	}
	while (halfS < fullS)
	{
		_putchar(str[halfS]);
		halfS++;
	}
	_putchar('\n');
}
