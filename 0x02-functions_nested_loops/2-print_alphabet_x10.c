#include "main.h"

/**
  * print_alphabet_x10 - a program that prints x10 the alphabet, in lowercase.
  *
  * Return: (0) on success .else error
  */

void print_alphabet_x10(void)
{
	char alphabet;
	int count = 1;

	while (count <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		count++;

	}



}


