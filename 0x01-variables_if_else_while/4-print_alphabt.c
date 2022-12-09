#include <stdio.h>
/**
  * main - Program entry point
  *
  * Return: 0 on success. Error code otherwise
  */
int main(void)
{
	char a = 'a';
	int n = 0;

	while (n <= 25)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
