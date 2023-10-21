#include<stdio.h>
#include<stdlib.h>
/**
 * main - description
 * Return: prints the numbers from 1 to 100
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		int r = i % 3;
		int q = i % 5;

		if (r == 0)
		{
			printf("Fizz");
			if (q == 0)
			{
				printf("Buzz");
			}
			i++;
			putchar(' ');
		}
		else if (q == 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				putchar(' ');
			}
			i++;
		}
		else
		{
			printf("%d", i);
			putchar(' ');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
