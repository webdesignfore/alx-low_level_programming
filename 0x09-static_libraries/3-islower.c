#include"main.h"

/**
 * _islower - function to check if
 *	character is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if `c` is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
