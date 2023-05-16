#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Function that creates an array of chars
 * and initializes it to a specific char
 * @size: number of bytes to allocate char
 * @c: char to assign
 * Return: pointer to array, null otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(size);

	if (size == 0 || str == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		str[size] = c;
	}
	return (str);
}
