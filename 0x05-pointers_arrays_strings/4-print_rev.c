#include "main.h"
/**
  *print_rev - function that prints a string in reverse followed by a new line
  *len: integer value
  *@s: input string
  */
void print_rev(char *s)
{
	int j, len;

	len = 0;
	while (s[len] != '\0')
		len++;
	len -= 1;
	for (j = 0; j <= len; j++)
		_putchar(s[len - j]);

	_putchar('\n');
}
