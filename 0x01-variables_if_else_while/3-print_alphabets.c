#include <stdio.h>
/**
 * main - Entry point
 * Description: 'putchar to print lower and upper case letters using ASCII decimal values'
 * Return 0 (Success)
 */
int main(void)
{
	int n = 97;
	int t = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (t <= 90)
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
