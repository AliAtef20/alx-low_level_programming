#include <stdio.h>
/**
 *main - prints all possible different combinations of three digits
 *Return: alwys 0
 */
int main(void)
{
	int n;
	int j;

	for (n = 0 ; n < 10 ; n++)
	{
		for (j = 1; j < 10; j++)
		{
			if (n < j && n != j)
			{
		putchar(n + '0');
		putchar(j + '0');
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
