#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: input string
 * Return: String in reverse
 */
void point_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
	
