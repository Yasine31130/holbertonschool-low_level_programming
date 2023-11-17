#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - description
 * @n: var num of args
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	 int result = 0;
        unsigned int i;

	va_list args ;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);

}
