#include "main.h"
/**
 * _isdigit - Description
 * @c: variable
 * Return: if c is digit shows 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
