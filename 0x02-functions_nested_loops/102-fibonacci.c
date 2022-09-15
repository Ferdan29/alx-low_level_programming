#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
