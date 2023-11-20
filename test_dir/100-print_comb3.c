#include <stdio.h>
/**
  *main - entry point
  *Return:0
  *
i  */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		for (a = 50)
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
