#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of an array of integer
 * @a: pointer to array
 * @n: number ofarray element
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if(i != - 1)
		{
			printf(".");
			printf(" ");
		}
	}
	printf("\n");
}
