#include <stdio.h>
#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	char s[1] = "";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
