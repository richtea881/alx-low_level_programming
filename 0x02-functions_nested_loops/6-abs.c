#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int will be used for the arguement of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
