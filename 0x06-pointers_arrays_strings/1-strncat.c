#include "main.h"
/**
 * *_strncat - Function that concatenates two strings
 * use at most n bytes from src
 * @dest: destination char variable pointer
 * @src: char pointer to add to end of destination
 * @n: number of elements to be added to dest end
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_length, j;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, string_length++)
	{
		dest[string_length] = src[j];
	}
	dest[string_length] = '\0';
	return (dest);
}
