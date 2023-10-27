#include"main.h"
/**
 * _atoi - description
 * @s: pointer
 * Return: convert a string to an integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;

	while (s[i] != '0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	unsigned int res = 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;

		if (s[i] < '0' || s[i] > '9')
		{
			res *= sign;
			return (res);
		}
	}
}
