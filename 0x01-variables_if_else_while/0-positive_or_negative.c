#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main block
 * description: print if random generated number is +tive, zero or -tive
 * Return:Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative \n", n);
	else if (n == 0)
		printf("%i is zero \n", n);
	else
		printf("%i is positive \n", n;
	return (0);
}