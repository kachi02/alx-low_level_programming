#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argv: argument vector of pointers to string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
