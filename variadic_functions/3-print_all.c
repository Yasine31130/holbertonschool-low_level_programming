#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - description
 * @args: list of args
 * Return: prints char
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - description
 * @args: list of args
 * Return: prints int
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_flo - description
 * @args: list of args
 * Return: prints float
 */
void print_flo(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - description
 * @args: list of args
 * Return: prints string
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

		printf("%s", str);
}
/**
 * print_all - description
 * @format: type of args
 * Return: prints string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;

	t type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_flo},
		{'s', print_string},
		{'\0', NULL}
	};
	va_list arg;

	va_start(arg, format);

	while (format != NULL && format[i])
	{
		while (j < 4)
		{
			if (format[i] == type[j].c)
			{
				type[j].f(arg);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(arg);
}
