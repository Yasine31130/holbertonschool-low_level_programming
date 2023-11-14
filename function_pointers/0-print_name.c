#include "function_pointers.h"
/**
 * print_name - description
 * @name: ptr to string
 * @f: ptr to function
 * Return: unction that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
