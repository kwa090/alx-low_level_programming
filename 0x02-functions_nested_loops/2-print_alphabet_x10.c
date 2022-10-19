#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char r;

	for (ten = 0; ten <= 9; ten++)
	{
		for (r = 'a'; r <= 'z'; r++)
			_putchar(r);

		_putchar('\n');
	}
}
