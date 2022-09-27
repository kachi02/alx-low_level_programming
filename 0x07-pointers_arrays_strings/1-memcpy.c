#include "main.h"

/**
 * _memcpy - a function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: no of bytes
 * Return: dest
 */

char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
