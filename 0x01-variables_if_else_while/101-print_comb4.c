#include <stdio.h>
/**
  * main - Program entry point
  *
  * Return: 0 on success. Error code otherwise
  */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (((i * 100) + (j * 10) + k) != 789)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;

	}
	putchar('\n');
	return (0);
}

