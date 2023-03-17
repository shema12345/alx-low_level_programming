#include <stdlib.h>
#include <time.h>
/* more headers goes here */
#include <stdio.h>
/* betty style doc for function main goes here */
/**
 * main - main function
 *
 * Retun: always o
 */

int main(void)
{
	int n;

	srand(time(0));
	n = 0;
	rand();
	RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	 else
	 {
		 if (n == 0)
		 {
			 printf("%d is zero", n);
		 }
		 else
		 {
			 printf("%d is negative", n);
		 }
	 }
	return (0);
}
