#include <stdio.h>
/**
  *main - Entry point
  *Description: 'prints all possible different combinations of three digits'
  *Return: always 0
  */
int main(void)
{
	int n, m, p;

	for (n = 0; n <= 7; n++)
	{
		for (m = n + 1; m <= 8; m++)
		{
			for (p = m + 1; p <= 9; p++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(p + '0');


				if (!(n == 7 && m == 8 && p == 9))
				{
					putchar(',');
					putchar(' ');
				}

			}

		}

	}

	putchar('\n');

	return (0);
}
