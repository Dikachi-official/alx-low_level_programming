#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	/* your code goes there */
	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and ", n, lastdigit);
		printf("not 0\n");
	}
	return (0);

}

