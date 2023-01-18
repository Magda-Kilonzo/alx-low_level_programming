#include <stdio.h>

/**
 * main - rint the name of the file it compiled from
 *
 * Return: Everything worked well
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
