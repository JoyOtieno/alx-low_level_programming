#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @m: Integer we will extract last number from
 * Return: 0 (Success)
 */
int print_last_digit(int m)
{
	int ld;

	ld = m % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
