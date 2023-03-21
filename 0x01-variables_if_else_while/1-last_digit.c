#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Discription: chech for number
  *Return: always 0
  */
int main(void)
{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastdigit > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else
		printf("the last digit of %d is %d and is greater than 5\n", n, lastdigit);


	return (0);
}
