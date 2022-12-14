#include "main.h"

/**
 * _calloc - function that allocates memory for an array and sets it
 * @nmemb: array of elements
 * @size: byte size of elements
 * Return: returns pointer of calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, (size * nmemb));

	return (p);

}
