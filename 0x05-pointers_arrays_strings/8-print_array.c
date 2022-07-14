#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n element of an array
 * @a: array to print
 * @n: number of values to print
 * Return: nothing
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
