#include "main.h"
/**
 * sqrt - description
 * @n: var num
 * @mult: var num
 * Return: check square root of a number.
 */
int sqrt(int n, int mult)
{
	if ((mult * mult) == n)
	{
		return (mult);
	}
	else if ((mult * mult) > n)
	{
		return (-1);
	}
	else
	{
		return sqrt(n, mult + 1);
	}
}
/**
 * _sqrt_recursion - description
 * @n: var num
 * Return: function that returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
