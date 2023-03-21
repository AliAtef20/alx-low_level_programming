#include <stdio.h>
/**
 * main - print the alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
		putchar(la);
	}
	putchar('\n');
	return (0);
}
