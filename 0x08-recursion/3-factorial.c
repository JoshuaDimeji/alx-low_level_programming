#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer to calculate its factorial
 * Return: the factorial of the given number, else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
