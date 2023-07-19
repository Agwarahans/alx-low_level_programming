#include "main.h"
/**
  *prime - calculate if its prime
  *@n:number to check
  *@i: iterator
  *Return: 0
  */
int prime(int n, int i)
{
	if (n <= 1 || (n != i && n % i == 0))
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
/**
  *check__prime - check for prime number
  *@n: number to check
  */
}
