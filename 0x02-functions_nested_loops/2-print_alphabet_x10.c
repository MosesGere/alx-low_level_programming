#include "main.h"
/*
 * main - entering point
 * Description - function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Returns 0
 */	
#include "main.h"

void print_alphabet_x10(void)
{
int alphabet;
int count;

count = 0;
while (count < 10)
	{
	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}

	count++;
	_putchar('\n');
	}

}
