#include "main.h"
/**
 * *cap_string - Function that capitalizes all words of a string
 * @x: string pointer
 * Return: pointer to x
 */
char *cap_string(char *x)
{
	int counter;

	counter = 0;
	while (x[counter] != '\0')
	{
		if (x[counter] == 0 && x[counter] >= 97 && x[0] <= 122)
		{
			x[counter] = x[counter] - 32;
		}
		if (x[counter] == ' ' || x[counter] == '\t'
			|| x[counter] == '\n'
			|| x[counter] == ','
			|| x[counter] == ';' || x[counter] == '.'
			|| x[counter] == '!' || x[counter] == '?'
			|| x[counter] == '"' || x[counter] == '('
			|| x[counter] == ')' || x[counter] == '{' || x[counter] == '}')
		{
			if (x[counter + 1] >= 97 && x[counter + 1] <= 122)
			{
				x[counter + 1] = x[counter + 1] - 32;
			}
		}
		counter++;
	}
	return (x);
}
