#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: square matrix to print the sum of the diagonal
 * @size: size of the matrix
 * Return: diagonals
 */
void print_diagsums(int *a, int size)
{

	int i;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
