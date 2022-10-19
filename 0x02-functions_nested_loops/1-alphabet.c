#include "main.h"

/**
 * prints the alphabet, print the alpha in lowercase
 */
void print_alphabet(void);
int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
		_putchar(r);

	_putchar('\n');
}
