#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a program that prints its name followed bya new line
 * @argc: argument that contains arguments input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, mul;

	if (arg != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mul = num_1 * num_2;
		printf("%d\n", mul);
	}
	return (0);
}
