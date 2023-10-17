#include <stdio.h>
#include <stdlib.h>
/**
 * main - DEscription
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
			i++;
		}
		else
			i++;
	}
	putchar('\n');

	return (0);
}
