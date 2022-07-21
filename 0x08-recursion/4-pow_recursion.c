#include "main.h"
/**
 * _pow_recursion - function that returns tge value
 * of x raised to the power of y
 * @x: first number
 * @y: second number
 * Return: the result, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int x, y;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
