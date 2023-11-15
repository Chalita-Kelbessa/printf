#include "main.h"

/**
 * prt_in - prints integer
 * @xarg: argument to print
 *
 * Return: number of chars
 *
 */

int prt_in(va_list xarg)
{
	int p = va_arg(xarg, int);
	int no, fin = p % 10, dig, exp = 1;
	int k = 1;

	p = p / 10;
	no = p;

	if (fin < 0)
	{
		_putchar('-');
		no = -no;
		p = -p;
		fin = -fin;
		k++;
	}
	if (no > 0)
	{
		do {
			exp = exp * 10;
			no = no / 10;

		} while (no / 10 != 0);
		 do {
			 dig = no / exp;
			 _putchar(dig + '0');
			 no = no - (dig * exp);
			 exp = exp / 10;
			 k++;
		} while (exp > 0);
	}
	_putchar(fin + '0');
	return (k);
}





#include "main.h"

/**
 * prt_dx - prints integer
 * @xarg: argument to print
 *
 *
 * Return: number of chars
 *
 */

int prt_dx(va_list xarg)
{
	int p = va_arg(xarg, int);

	int no, fin = p % 10, dig, exp = 1;

	int k = 1;

	p = p / 10;
	no = p;

	if (fin < 0)
	{
		_putchar('-');
		no = -no;
		p = -p;
		fin = -fin;
		k++;
		if (no > 0)
		{
			do {
				exp = exp * 10;
				no = no / 10;
			} while (no / 10 != 0);

			do {
				dig = no / exp;
				_putchar(dig + '0');
				no = no - (dig * exp);
				exp = exp / 10;
				k++;
			} while (exp > 0);
		}
	}
	_putchar(fin + '0');
	return (k);
}
