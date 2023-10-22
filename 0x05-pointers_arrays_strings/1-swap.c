#include "main.h"
/**
  *swap_int - functionto swipe values
  *@a: first integer value
  *@b: second value
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
