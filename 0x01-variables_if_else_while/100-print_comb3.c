#include <stdio.h>
/**
  *main - entry point
  *
  *Return:0
  */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
				if (a >=  b)
				{
					continue;
					b++;
				}

				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

