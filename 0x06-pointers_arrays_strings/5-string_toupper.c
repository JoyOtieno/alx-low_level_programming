#include "main.h"
/**
 * *string_toupper - Function to change lowercase letters of a string to upper
 * @c: string pointer
 * Return: uppercase pointer
 */
char *string_toupper(char *c)
{
	int string_length;

	string_length = 0;
	while (c[string_length] != '\0')
	{
		if (c[string_length] >= 97 && c[string_length] <= 122)
		{
			c[string_length] = c[string_length] - 32;
		}
		string_length++;
	}
	return (c);
}

