#include "main.h"
/**
 * _islower - shows 1 if the input is a
 * lowercase  anthoer cases, shows 0
  @c : the character in ASCII code
 *
 * Retuens: 1 for lowercase. 0 fir the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
