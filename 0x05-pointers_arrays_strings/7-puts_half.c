#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: string
 * Return: length
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;

	for (int i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
