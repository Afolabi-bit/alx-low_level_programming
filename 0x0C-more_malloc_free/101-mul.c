#include <stdio.h>

/**
 * main - multiplies two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: Zero for success
 */
int main(argc, argv[])
{
	unsigned int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(argc[1] >= 0) || !(argc[2] >= 0))
	{
		printf("Error\n");
		exit(98);
	}
	mul = argc[1] * argc[2];
	printf("%lu\n", mul);
	return (0);
}
