#include <stdio.h>

/**
 * main - print sum of 2 number
 * @argc: number of commandline arguments.
 * @argv: pointer of an array of commandline arguments.
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
