#include "main.h"

/**
 * prt_stg - output string
 *
 * @argt: argument
 *
 * Return: the length of the string.
 */

int prt_stg(va_list argt)
{
	char *str;
	int k;
	int lenh;

	str = va_arg(argt, char *);

	if (str == NULL)
	{
		str = "(null)";
		lenh = _strl(str);

		for (k = 0; k < lenh; k++)
			_putchar(str[k]);
		return (lenh);
	}
	else
	{
		lenh = _strl(str);
		for (k = 0; k < lenh; k++)
			_putchar(str[k]);
		return (lenh);
	}
}
