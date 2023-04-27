#include "main.h"
/**
 * _isdigit - Function for checking digit chars
 * @c: The character we will check.
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
