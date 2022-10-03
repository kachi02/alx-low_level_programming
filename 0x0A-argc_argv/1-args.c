#include <stdio.h>

/**
 * main - prints the name number of argumentspassed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vectors of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
