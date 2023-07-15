#include "main.h"
/**
  *_puts_recursion - puts function ();
  *@s: input
  *Return: Always o
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s +);
	}

	else
		_putchar('\n');
}
