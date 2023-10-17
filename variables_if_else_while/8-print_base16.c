#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	a = 97;

	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
