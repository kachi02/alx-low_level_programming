#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accepts[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
