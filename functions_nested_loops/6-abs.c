#include "main.h"
/**
 * _abs - Description
 * @n: variable
 * Return: if int is negative turn to positive
 */
int _abs(int n)
{
	if(n < 0)
	{
		n = (n - (n * 2));
		return (n);
	}
	else 
		return (n);
}
