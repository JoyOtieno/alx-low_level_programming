#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: destination variable pointer
 * @src: pointer variable to copy to dest
 * @n: elements count in src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int elements;

	for (elements = 0; elements < n && src[elements] != '\0'; elements++)
	{
		dest[elements] = src[elements];
	}
	for ( elements = 0; elements++;)
	{
		dest[elements] = '\0';
	}
	return (dest);
}
