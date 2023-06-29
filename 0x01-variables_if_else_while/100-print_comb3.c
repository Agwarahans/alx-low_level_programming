#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints all possible different combinations of two digits'
  *Return: Always 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
	for (m = 0; m <= 9; m++)
	{
		if (n != 8 || m != 9)
		{
			if (!(n == 1 && m == 0))
		{
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
		}
		}
	}
	}

	putchar('\n');

	return (0);
}
