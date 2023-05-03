#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: string to be reversed
 * Returns: nothing
 */
void rev_string(char *s)
{
	char rev;
	int string_length, i, half_string;

	for (string_length = 0; s[string_length] != '\0'; string_length++)
	{
		i = 0;
		half_string = string_length / 2;
	}
	while (half_string--)
	{
		rev = s[string_length - i - 1];
		s[string_length - i - 1] = s[i];
		s[i] = rev;
		i++;
	}
}
