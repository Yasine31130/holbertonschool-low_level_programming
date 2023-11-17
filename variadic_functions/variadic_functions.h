#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct formats - Description
 * @c: char
 * @f: function
 * Description: Longer description
 */
typedef struct formats
{
	char c;
	void (*f)(va_list);
} t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
