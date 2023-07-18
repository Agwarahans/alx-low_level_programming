#include "main.h"

int check__prime(int n, int i);

/**
 * is_prime_number - Return if a number is prime
 * @n: number to check
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check__prime(n, n - 1));
}

/**
 * check_prime -check for prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
