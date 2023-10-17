#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
