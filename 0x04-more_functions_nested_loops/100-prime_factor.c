#include <stdio.h>
#include <math.h>
/**
 * main - program that finds and prints the
 * largest prime factor of the number 612852475143
 * Return: The largest prime factor of 612852475143
 */
int main(void)
{

	long int num;
	long int max;
	long int i;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
		max = i;
		num = num / i;
		}
	}
	if (n > 2)
		max = num;
	printf("%ld\n", max);

	return (0);

}
