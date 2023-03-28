#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: alwys 0
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 1; x <= 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
