#include <stdio.h>
/**
 * main - Entry point
 * Description: Use putchar to print small letters reverse.
 * Return: 0 (Success)
 */
int main(void)
{
	int t;

	for (t = 122; t >= 97; t--)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
