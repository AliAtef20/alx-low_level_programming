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

	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	printf("\n");
	return (0);
}
