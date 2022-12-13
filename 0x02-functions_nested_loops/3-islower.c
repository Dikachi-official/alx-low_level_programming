#include "main.h"

/**
  * _islower - a program thaat checks for lowercase character.
  * @object: number or an alphabet
  * Return: (0) on success .else error
  */

int _islower(int object)
{
	if (object >= 'a' && object <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


