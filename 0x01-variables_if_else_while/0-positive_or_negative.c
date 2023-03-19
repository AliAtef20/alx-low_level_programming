#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes ther*/
/* betty style doc for function main goes ther*/
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	long int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes ther*/
	if (n > 0)
		printf("%ld is positive", n);
	else if (n == 0)
		printf("%ld is zero", n);
	else if (n < 0)
		printf("%ld is negative", n);
	printf("\n");
	return (0);
}
