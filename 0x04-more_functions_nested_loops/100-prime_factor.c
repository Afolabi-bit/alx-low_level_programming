#include <stdio.h>

/**
 * main - Print the biggest prime number
 * Description: Prints prime num
 * Return: Zero
 */
int main(void)
{
	long int num, f;
	num = 612852475143;
	f = 2;

	while (f <= num)
	{
		if (num % f == 0)
		{
			num /= f;
		}
		f++;
	}
	printf("%ld", f);

	return (0);
}
