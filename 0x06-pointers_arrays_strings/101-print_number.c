#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = (n < 0) ? -n : n;

	if (n < 0)
		_putchar('-');

	if (n1 / 10 != 0)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');

	if (n == 0)
		_putchar('0');
}
