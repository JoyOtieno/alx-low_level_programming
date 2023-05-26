#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - Function that sums all its parameters
*@n: argument count
*Return: sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int sum = 0;

	va_list nums;

	va_start(nums, n);
	for (t = 0; t < n; t++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
