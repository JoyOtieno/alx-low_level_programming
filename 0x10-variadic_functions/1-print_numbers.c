#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - Function to prints nums followed by a new line
*@separator: string to print
*@n: argument count
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;

	unsigned int t;

	va_start(nums, n);

	for (t = 0; t < n; t++)
	{
		if (!separator)
		{
			printf("%d", va_arg(nums, int));
		}
		if (separator && t == 0)
		{
			printf("%d", va_arg(nums, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(nums, int));
		}
	}
	va_end(nums);
	printf("\n");
}
