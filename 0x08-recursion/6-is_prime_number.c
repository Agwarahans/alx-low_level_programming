#include "main.h"

int main_prime(int n, int i);

/**
 * is_prime_number - Tells a prime or not
 * @n: num to examine
 * Return:1 if n is prime , 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime - evaluate if a num is prime recursively
 * @n: num to evaluate
 * @i: iterating number
 * Return:1 if n is prime, 0 if not
 */
int main_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (main_prime(n, i - 1));
}
