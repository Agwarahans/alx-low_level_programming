#include "main.h"

int look_pal(char *s, int i, int len);
int _strlen_recursions(char *s);

/**
 * is_palindrome - looks if a string is palindrome
 * @s: string to reverse
 * Return:1 if it is, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (look_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - gives length of string
 * @s:string to determine length of a string
 * Return:length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * look_pal -checks characters recursively for palindrome
 * @s:string to check
 * @i:the iterator
 * @len:length of the string
 * Return: 1 if palindrome 0 if not
 */
int look_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + lent - 1))
		return (0);
	if (i >= len)
		return (1);
	return (look_pal(s, i + 1, len - 1));
}
