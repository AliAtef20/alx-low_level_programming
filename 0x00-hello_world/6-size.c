#include <stdio.h>
#include <stdlib.h>
/**
 *main - main munction
 *
 * Return 0 on success
 */
int main(void)
{
	char a;
	int n;
	long int c;
	long long int d;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
	printf("\n");
	return (0);
}
