#include "main.h"

/**
  * print_alphabet - a program that prints the alphabet, in lowercase.
  *
  * Return: (0) on success .else error
  */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');


}


