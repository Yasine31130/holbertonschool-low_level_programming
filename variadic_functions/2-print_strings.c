#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Description
 * @separator: num of parameters
 * @n: var
 * Return: returns the sum of all its parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
