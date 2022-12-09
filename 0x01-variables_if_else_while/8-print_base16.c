#include <stdio.h>
/**
  * main - Program entry point
  *
  * Return: 0 on success. Error code otherwise
  */
int main(void)
{
	int n = 0;
	char a = 'a';

	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
		{
			putchar(a);
			a++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}


