#include<stdio.h>

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; ++a)
	{
		putchar('0' + a);
		if (a == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	piychar('\n');
	return (0);
}
