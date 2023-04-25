#include <stdio.h>
/**
 * main - Entry point
 * Decsription: pretty small letters excepts q and e.
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
		putchar(n);
	}
	putchar('\n');
	return (0);
}
