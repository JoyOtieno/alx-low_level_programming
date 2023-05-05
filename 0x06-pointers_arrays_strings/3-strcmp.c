#include "main.h"
/**
 * _strcmp -  Function that compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 is s1=s2, -0 if s2<s2, +0 if s2>s2
 */
int _strcmp(char *s1, char *s2)
{
	int char_count, comp_value;

	char_count = 0;
	while (s1[char_count] == s2[char_count] && s1[char_count] != '\0')
	{
		char_count++;
	}
	comp_value = s1[char_count] - s2[char_count];
	return (comp_value);
}

