#include "main.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: source string to be checked
 * @needle: substring to check for occurrence in haystack
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int bytes;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		bytes = 0;
		if (haystack[bytes] == needle[bytes])
		{
			do {
				if (needle[bytes + 1] == '\0')
				{
					return (haystack);
				}
				bytes++;
			} while (haystack[bytes] == needle[bytes]);

		}
		haystack++;
	}
	return ('\0');
}
