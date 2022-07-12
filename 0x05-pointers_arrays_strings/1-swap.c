#include "main.h"
/**
 * swap_int - functions that swaps the value of two integers
 * @a: address of the first value
 * @b: address of the second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	
	int c = *a;

	*a = *b;
	*b = c;
}
