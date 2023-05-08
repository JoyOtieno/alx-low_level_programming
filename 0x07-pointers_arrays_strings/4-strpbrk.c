#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for presence in s
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int bytes;

	while (*s)
	{
		for (bytes = 0; accept[bytes]; bytes++)
		{
			if (*s == accept[bytes])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
