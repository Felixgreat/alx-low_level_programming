#include "main.h"

/**
 *  print_putchar - a function that prints the alphabet, in lowercase
 *
 *  Return: Always 0 (Succes)
 */
void print_putchar(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
