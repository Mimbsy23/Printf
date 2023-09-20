#include "main.h"
/**
 * _printf - printf function
 * @format: format
 * Return: printed char
 */

int _printf(const char *format, ...)
{
	int i;
	int ncount = 0;
	va_list mims;

	va_start(mims, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's'
					|| format[i] == 'i')
			{
				ncount += selector(format[i])(mims);
			}
			else
			{
				ncount += _putchar('%');
				continue;
			}
		}
		else
		{
			ncount += _putchar(format[i]);
		}
	}
	va_end(mims);
	return (ncount);
}
