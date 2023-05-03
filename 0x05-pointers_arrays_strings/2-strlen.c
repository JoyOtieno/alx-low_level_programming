#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: the string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int string_length = 0;

	if (*s != '\0')
	{
		string_length++;
		s++;

		string_length += _strlen(s);
	}
	return (string_length);
}

