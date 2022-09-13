#include <stdio.h>

/**
 * main - Computes sum
 * Description: Adds all multiples of 3 and 5
 * Return: Zero
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
		else
		{
			continue;
		}
	}
	printf("%d/n", sum);
}
