#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char l;

	l = 'a';
	while
		(l <= 'z')
	{
		if ((l != 'q' && l != 'e') && l <= 'z')
		putchar(l);
		l++
	}

	putchar('\n');

	return (0);
}
