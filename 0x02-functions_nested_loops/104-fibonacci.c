#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci nums
 * Description: Fibonacci sequence
 * Return: Zero
 */
int main(void)
{
	unsigned long num, seq, sum;
	int i;

	num = 1;
	seq = 2;
	sum = 0;

	for (i = 0; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%ld, ", num);
			sum = num + sum;
			num = seq;
			seq = sum;
		}
		else
		{
			printf("%ld\n", num);
		}
	}
	return (0);
}
