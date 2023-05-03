#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int string_length = 0;

	while (s[string_length])
	{
		string_length++;
	}
	while (string_length--)
	{
		_putchar(s[string_length]);
	}
	_putchar('\n');
}
