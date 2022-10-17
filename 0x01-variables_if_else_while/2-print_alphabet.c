#include <stdio.h>

/**
 * main - writting lowercase letters in c
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z', lc++)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);
}
