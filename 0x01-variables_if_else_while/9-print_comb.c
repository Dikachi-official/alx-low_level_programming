#include <stdio.h>
/**
  * main - Program entry point
  *
  * Return: 0 on success. Error code otherwise
  */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}

