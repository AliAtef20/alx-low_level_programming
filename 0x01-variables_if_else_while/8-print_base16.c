#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
