#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - main function to generate a random number
 * description: get a random number and print number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is poditive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n < 0)
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
