#include "main.h"

int _sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns square root of a num
 * @n:num to calculate square root
 * Return:square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find square root
 * @n:square root
 * @i:number of times it iterates
 * Return:resulting square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n + 1));
}
