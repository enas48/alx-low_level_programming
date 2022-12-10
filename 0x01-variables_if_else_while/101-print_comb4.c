#include<stdio.h>

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; ++a)
	{
		for (b = a; b <= 9; ++b)
		{
			for (c = b; c <= 9; ++c)
			{
				if ((a == b) | (b == c) | ((a == b) == c))
				{
					continue;
				}
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a == 7 && b == 8 && c == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
