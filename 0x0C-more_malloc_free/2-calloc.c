#include "main.h"
/**
 * *_memset - fills memory
 * @s: pointr
 * @b: conast
 * @n: max byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - alloctes memory
 * @nmemb: array length
 * @size: size of each
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	return (m);
}
