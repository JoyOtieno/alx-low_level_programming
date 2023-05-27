#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - Function to prints nums followed by a new line
*@separator: string to print
*@n: argument count
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int t;

	va_start(nums, n);

	printf("%d", va_arg(nums, int));
	for (t = 1; t < n; t++)
	{
		if (separator)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
