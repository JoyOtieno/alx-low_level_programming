#include <stdio.h>
/**
 * main - Entry point
 * Description: Use putchar to print base sixteen nums.
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
