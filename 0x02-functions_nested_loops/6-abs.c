#include "main.h"
/**
  *_abs - function that computes the absolute value of an integer
  *
  *@i: integer inpur
  *Return: i or i*-1 if negative
  */
int _abs(int i)
{
	if (i >= 1)
	{
		return (i);

	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
