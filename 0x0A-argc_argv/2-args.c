#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: numbers of argument on the command line.
 * @argv: arrays that contains the program command line argument.
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc, i++)
		printf("%d\n", argv[i]);
	return (0);
}
