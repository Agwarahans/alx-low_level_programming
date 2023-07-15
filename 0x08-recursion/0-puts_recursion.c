#include "main.h"
/**
  *_put_recursion - puts function
  *@s: input
  *Return: Always 0
  */
void_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
