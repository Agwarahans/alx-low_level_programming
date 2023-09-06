#include "main.h"

/**
 * _pow_recursion - Returns value of x to power y
 * @x:value to raise
 * @y: the power to raise
 *Return:result
 */
int _pow_recursion(int x, y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
