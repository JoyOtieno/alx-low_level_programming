#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to
 * _strcpy: Copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @src: Referencer string
 * @dest: chary string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int p = -1;

	do {
		p++;
		dest[p] = src[p];
	} while (src[p] != '\0');

		return (dest);
}
