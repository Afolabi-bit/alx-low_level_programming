#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive nums
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int x = 0, i, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 1)
			res += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (x);
}
