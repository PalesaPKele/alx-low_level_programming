#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: ptr.
 */

char* _strcat(char* dest, const char* src)
{
	char* ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
	        src++;
	}
	*dest = '\0';
	return ptr;
}
