#include "main.h"

/**
 * _abs - function that computes the absolute
 * vlaue of an integer.
 * @n: takes in integer type inpute in function
 * Return: alwys 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
