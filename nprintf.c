#include "main.h"

/**
 * _printf - alt functions to printf
 *
 * @format: inpur format str
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int new_charpr = 0;
	va_list arlist;

	if (format == NULL)
		return (-1);

	va_start(arlist, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			new_charpr++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				new_charpr++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(arlist, int);
				write(1, &c, 1);
				new_charpr++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arlist, char*);
				int strlen = 0;

				while (str[strlen] != '\0')
					strlen++;

				write(1, str, strlen);
				new_charpr += strlen;
			}
		}

		format++;
	}
	va_end(arlist);
	return (new_charpr);
}
