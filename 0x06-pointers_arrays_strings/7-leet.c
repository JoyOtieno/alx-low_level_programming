#include "main.h"
/**
 * *leet - function that encodes a string
 * @n: string pointer
 * Return: n pointer
 */
char *leet(char *n)
{
	char leetters[] = "aAeEoOtTlL";
	char leettersNum[] = "4433007711";
	int lettercount, length_of_string;

	length_of_string = 0;
	while (n[length_of_string] != '\0')
	{
		lettercount = 0;
		while (lettercount < 10)
		{
			if (leetters[lettercount] == n[length_of_string])
			{
				n[length_of_string] = leettersNum[lettercount];
			}
			lettercount++;
		}
		length_of_string++;
	}
	return (n);
}
