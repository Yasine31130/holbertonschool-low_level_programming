#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - description
 * @separator: char that separate num
 * @n: num of size
 * Return: function that prints numbers, followed by a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
}
