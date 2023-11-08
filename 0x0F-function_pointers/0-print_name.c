#include "function_pointers.h"

/**
  * print_name - prints string arguement
  *@name: string
  *@f: pointer to  function
  *function pointers
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
