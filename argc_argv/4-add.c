#include<stdlib.h>
#include<stdio.h>
/**
 * main - description
 * @argc: var num args
 * @argv: array of args
 * Return: program that adds positive numbers.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	char *s;
	int result = 0;

	while (i < argc)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		result = result + atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
