#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - description
 * @argc: var num of args
 * @argv: array of args
 * Return: program that multiplies two numbers.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
