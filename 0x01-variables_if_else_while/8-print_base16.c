#include<stdio.h>

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	int a;
	char c;

	for (a = 0; a <= 9; ++a)
	{
		putchar('0' + a);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
