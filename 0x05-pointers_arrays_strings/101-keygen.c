#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords
 * Return: nothing
 */
int main(void)
{

	int pass;
	int sum;

	srand(time(0));

	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);

}
