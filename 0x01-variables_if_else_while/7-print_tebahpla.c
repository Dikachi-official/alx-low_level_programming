#include <stdio.h>
/**
  * main - Program entry point
  *
  * Return: 0 on success. Error code otherwise
  */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}


