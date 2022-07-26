#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints tge name of the program
 * @argc: the argument count
 * @argv: the array argument points to
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
