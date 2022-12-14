#include "main.h"

/**
 * _isalpha - checks if charater is alphabetical
 * @c: The chaacter to check
 *
 * Return: 1 if c is alphabetical
 * otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
