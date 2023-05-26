#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - Function that prints strings
*@separator: string to be printed between the strings
*@n: number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	char *str;

	va_list(nums);

	va_start(nums, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(nums, char *);
		if (!str)
		{
			printf("nil");
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && t == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(nums);
}
