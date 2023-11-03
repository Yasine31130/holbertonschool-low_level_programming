#include "main.h"
/**
 * is_prime - Description
 * @n: variable
 * @x: variable
 * Return: check if prime number
 */
int is_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	return (is_prime(n, --x));
}
/**
 * is_prime_number - description
 * @n: var num
 * Return: a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, n - 1));
	}
}
