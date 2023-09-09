#include "main.h"
#include <unistd.h>
/**
  *_putchar - displays character to c
  *@c: The character to be printed
  *
  *Return: on success 1.
  *on error, -1 is returned and errno set properly.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
