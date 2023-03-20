#include <time.h>
#include <stdlib.h>
/* more header goes ther */
#include <stdio.h>
/* Betty style doc for function main goes ther */
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is Less than 6 and not 0", n, m);
	printf("\n");

	return (0);
}
