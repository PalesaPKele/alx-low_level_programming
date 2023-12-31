#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an intege
 * @sign: 1 
 * @result: 0
 * Return: sign
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
	s++;
	}
	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
        result = result * 10 + (*s - '0');
        s++;
	}
	return (sign);
}
