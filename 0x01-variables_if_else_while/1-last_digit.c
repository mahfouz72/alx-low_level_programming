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
	int lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigi = n % 10;
	if (lastdigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigi);
	}
	else if (lastdigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigi);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigi);

	return (0);
}
