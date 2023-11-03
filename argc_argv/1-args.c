#include<stdio.h>
#include <stdlib.h>
/**
 * main - description
 * @argc: num of arg
 * @argv: array of arg
 * Return: program that prints the number of arguments passed into it.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}
