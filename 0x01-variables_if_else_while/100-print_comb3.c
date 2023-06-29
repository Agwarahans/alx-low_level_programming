#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints all possible different combinations of two digits'
  *Return: Always 0
  */
int main(void)
{
	int  n = 0;

	while (n < 9)
	{
	int m = n + 1;

	while (m <= 9)
	{
		putchar(n + '0');
		putchar(m + '0');
		if (!(n == 8 && m == 9))
		{
			putchar(',');
			putchar(' ');
		}

		m++;

	}

	n++;

	}

	putchar('\n');

	return (0);
}
