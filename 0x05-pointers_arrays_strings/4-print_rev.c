#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(*s);

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(*s[i]);
	}
	_putchar('\n');
}

