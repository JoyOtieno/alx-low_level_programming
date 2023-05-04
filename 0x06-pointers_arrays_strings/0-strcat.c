#include "main.h"
/**
 * *_strcat - Function that concatenates two strings
 * Description: This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest: destination char variable pointer
 * @src: char pointer to add to end of destination
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int string_length, j;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (j = 0; src[j] != '\0'; j++, string_length++)
	{
		dest[string_length] = src[j];
	}
	dest[string_length] = '\0';
	return (dest);
}
