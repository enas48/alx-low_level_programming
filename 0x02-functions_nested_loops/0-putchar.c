#include<stdio.h>

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
