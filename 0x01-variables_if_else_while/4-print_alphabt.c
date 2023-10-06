#include <stdio.h>
/**
  *main - -entry point
  *
  *Return:0
  */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 113 || a == 101)
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
