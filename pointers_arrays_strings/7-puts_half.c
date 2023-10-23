#include"main.h"
/**
 * puts_half - description
 * @str: pointer
 * Return: prints half of a string,
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
