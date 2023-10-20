#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * print_to_98 - Description
 * @n: var num
 * Return: prints all natural numbers from n to 98, followed by a new line
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d", n);
	putchar('\n');
}
