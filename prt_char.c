#include "main.h"

/**
 * prt_char - prints a character
 * @argt: arguments
 *
 *
 * Return: 1
 *
 */

int prt_char(va_list argt)
{
	char stng;

	stng = va_arg(argt, int);
	_putchar(stng);
	return (1);
}
