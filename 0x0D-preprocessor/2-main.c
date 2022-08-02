#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints prints the name of the file it was compiled
 * from, followed by a new line.
 * Return: 0 ( successful)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
