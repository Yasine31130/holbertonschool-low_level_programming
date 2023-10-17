#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code.
 * print_alphabet - fuction that print alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	i++;
	}
}
