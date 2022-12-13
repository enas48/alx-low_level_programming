#include<stdio.h>
#include <string.h> 

/**
 * main - Description: c
 * Return: 0
*/
int main(void)
{
	char c[10] = "_putchar";
	int length = strlen(c);
	int a = 0;

	while (a < length)
	{
		putchar(c[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
