#include "main.h"
/**
 * _puts_recursion - puts function();
 * @s: string to print
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
