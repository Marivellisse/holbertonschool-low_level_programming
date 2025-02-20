#include "main.h"
/**
 * _abs - give the asbolute value
 * @n: It's the number
 */
int abs(int n)
{
	/* This is work out the negative signs to make it the asbolute value*/
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else if (n > 0)
		return (n);
	return (0);
}
