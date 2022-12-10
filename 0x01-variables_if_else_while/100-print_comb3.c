#include<stdio.h>

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; ++a)
	{
		for (b = a; b <= 9; ++b)
		{
			if (a == b)
			{
				continue;
			}
			putchar('0' + a);
			putchar('0' + b);
			if (b == 9 && a == 8)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
