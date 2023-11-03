#include<stdio.h>
#include<stdlib.h>
/**
 * main - description
 * @argc: num arg
 * @argv: array of arg
 * Return: program that prints all arguments it receives.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
