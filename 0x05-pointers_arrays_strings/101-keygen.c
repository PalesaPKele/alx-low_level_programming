#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function that convert a string to an integer
 *
 * Return: Always 0.
 */

int main(void)
{
	srand(time(NULL));
	int i;
	char password[8];

	for (i = 0; i < 8; i++)
	{
		password[i] = rand() % 26 + 97;
	}
	printf("%s\n", password);
	return (0);
}
