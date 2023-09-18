#include "main.h"
#include <stdio.h>

/**
 * rev_string - unction that reverses a string
 * @s: Input string
 * Return: Strings in reverse
 */
void rev_string(char *s)
{
	int len = strlen(s);

	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
