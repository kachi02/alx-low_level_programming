#include "main.h"
/**
 * _strncpy - function that copies the string, including the
 * terminating null byte, using at most an inputted number of bytes
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of bytes copied
 * Return: returns
 */

char *_strncopy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
