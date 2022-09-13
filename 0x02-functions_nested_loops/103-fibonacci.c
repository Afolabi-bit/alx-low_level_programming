#include <stdio.h>

/**
 * main - Liber Abbaci
 * Description: Finds and prints the sum of even-valaues terms
 * Return: Zero
 */
int main(void)
{
	long int i, num, seq, sum, print_sum, checker;
	
	num = 1;
	seq = 2;
	sum = 0;
	print_sum = 0;


	for (i = 1; i <= 33; i++)
	{
		if ((num % 2) == 0 && num < 4000000)
		{
			sum += num;	
		}
		sum = num + seq;
		num = seq;
		seq = sum;
	}
	printf("%ld\n", print_sum);
	return (0);
}
