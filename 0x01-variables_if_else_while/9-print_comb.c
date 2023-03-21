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

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n <= 56)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
