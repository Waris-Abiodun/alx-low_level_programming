#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers follwoed by a newline
 * @separator: the string to be printed
 * @n: the number of intergers passed in the function
 * @...: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i;

	va_start(nlist, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
		{
			printf("%d", va_arg(nlist, int));
		}
		else
			printf("%d%s", va_arg(nlist, int), separator);
	}
	va_end(nlist);
	printf("\n");

}
