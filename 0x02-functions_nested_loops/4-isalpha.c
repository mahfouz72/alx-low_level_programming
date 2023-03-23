#include "main.h"
/**
  *_isalpha _ shows 1 if the input is a
  * letter another cases shows 0
  *
  * @x : the charachter in ascii code
  * REturns 1 for letters 0 for rest
 */
int _isalpha(int x)
{
	if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}



