#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *Return: Always 0
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	if (num / 10 != 0)
		print_number(num / 10);
}
	_putchar((num % 10) + '0');
}
