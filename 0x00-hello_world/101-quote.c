#include<stdio.h>

/**
 * main - Description: c
 * Return: 1
 */
int main(void)
{
	char *M = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*M)
	{
	putchar(*M++);
	}
	return (1);
}
