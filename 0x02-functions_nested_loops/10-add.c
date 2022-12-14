#include<stdio.h>
#include "main.h"

/**
 * add - Description: adds two integers and returns the result.
 * @a: int
 * @b: int
 * Return: adds two integers and returns the result.
*/
int add(int a, int b)
{
	int c;

	c = a + b;
	_putchar('0' + c);
	_putchar('\n');
	return (c);
}
