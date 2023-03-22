#include <stdio.h>

/**
 * main - prints the sum of even numbers
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long j, k, next, sum;

	j = 1;
	k = 2;

	for (i = 1 ; i <= 33 ; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);
	return (0);
}
