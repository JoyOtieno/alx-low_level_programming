#include "main.h"
/**
 * main - Entry point
 * Description: Print lower alphabets followed by line.
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}