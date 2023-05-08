#include "main.h"
/**
 * *_memcpy - Function that copies memory area
 * @src: source memory to start copying
 * @dest: destination memory area to copy to
 * @n: number of bytes to copy to dest
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
