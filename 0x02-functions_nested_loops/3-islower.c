#include "main.h"

/**
 *_islower - show 1 if the input lower case
 *
 *@c: charcter in ASCII code
 *
 * Return: alwys 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
