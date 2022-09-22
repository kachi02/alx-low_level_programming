#include "main.h"

/**
 * _strncpy - copies at most an inputted number of bytes
 * from string src to dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: a pointer to the resulting string dest
 */

char *strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
