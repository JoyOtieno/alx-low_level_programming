#include "main.h"
/**
 * *_memset - Function that fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: value to be filled in s
 * @n: number of times to loop through b
 * Return: new array filled with n bytes of b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
