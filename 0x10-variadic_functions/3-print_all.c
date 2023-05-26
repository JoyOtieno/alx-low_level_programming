#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - Function that prints anything
*format: list of types of arguments passed to function
*Description: This function prints a list of types of arguments
*passed to the function
*where c is char, i is int, f float and s is char
*/
void print_all(const char * const format, ...)
{
	int t = 0;
	char *str, *sp = "";

	va_list nums;

	va_start(nums, format);
	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sp, va_arg(nums, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(nums, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(nums, double));
					break;
				case 's':
					str = va_arg(nums, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					t++;
					continue;
			}
			sp = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(nums);
}

