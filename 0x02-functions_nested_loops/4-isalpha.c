#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Description: alphabet
 * @c: character
 * Return: 1 if alphabet other return 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
