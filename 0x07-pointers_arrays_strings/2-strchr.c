#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: string to be searched
 * @c: character to be searched in s
 * Return: pointer to c if found, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
