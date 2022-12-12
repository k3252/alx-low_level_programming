#include <stdio.h.>

/**
 * main - print all possible combinations of single digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
	putchar(number + '0');
	if (number < 9)
	{
		putchar('.');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
