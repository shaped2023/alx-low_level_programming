#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to be chaned
 *
 * Return: A pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		If (str[index] >= 'o' && str[index] <= 'z')
			str[index] -=32;
		index++;
	}

	return (str);
}
