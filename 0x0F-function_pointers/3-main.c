#include "3-calc.h"

/**
 * main - Accepts integers and computes them
 * @argc: args count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	char *s;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	if (!check_op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	return (0);
}
