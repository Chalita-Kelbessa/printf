#include "main.h"

/**
 * _strl - prits length of atr
 * @str: strng pointer
 *
 *
 * Return: 1 success
 */

int _strl(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlc - strl for const char
 * @str: character pointer
 *
 *
 * Return: 1 success
 */

int _strlc(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;
	return (j);

}
