#include "main.h"

/**
  *_isalpha - program that checks for alphabetic characters
  *
  *@object: an alphabet
  *
  *Return: 1 if successful otherwise 0
  */

int _isalpha(int object)
{
	if ((object >= 'a' && object <= 'z') || (object >= 'A' && object <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
