#include "main.h"


/*
 * main - entering point
 * Description - function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Returns 0
 */

void print_alphabet_x10(void)
{
	int i;
	int a;

	i = 0;

	while (i < 10)
	{
		a = 0;
		while (a < z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
	
}
