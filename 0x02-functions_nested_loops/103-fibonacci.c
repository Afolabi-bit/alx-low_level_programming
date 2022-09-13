#include <stdio.h>

/**
 * main - Liber Abbaci
 * Description: Finds and prints the sum of even-valaues terms
 * Return: Zero
 */
int main(void)
{
	long int i, num, seq, sum, print_sum, checker;

	seq = 2;
	sum = 0;
	print_sum = 0;


	for (i = 0; i < 35; i++)
	{
		num = seq;
		sum = num + seq;
		seq = sum;
		if ((num % 2) == 0)
		{
			if (checker >= 4613732)
			{
				break;
			}
			print_sum += num;
			checker = print_num
		}
	}
	printf("%ld\n", print_sum);
	return (0);
}
