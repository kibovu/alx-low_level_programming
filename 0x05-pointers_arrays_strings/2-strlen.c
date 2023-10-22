#include "main.h"
/**
  *_strlen - prototype
  *@s: string
  *Return: count
  */

int _strlen(char *s)

{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
