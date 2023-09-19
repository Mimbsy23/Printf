#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);
	int kesi = 0;

	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			if (*format == 'c')
			{
				putchar(va_arg(list, int));
			}
			else if (*format == 's')
			{
				for (char *str = va_arg(list, char *); *str; str++)
				{
					putchar(*str);
					kesi++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);

				printf("%d", num);
				kesi++;
			}
			else
			{
				putchar('%');
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
		}
		list++;
		format++;
	}
	va_end(list);
	return (kesi);
}

int main(void)

{
	int kesi = _printf("Hello, %c world! %s %%\n", 'C', "This is a test");

	printf("\nTotal characters printed: %d\n", kesi);
	kesi = _printf("This is a number: %d\n", 42);
	printf("\nTotal characters printed: %d\n", kesi);
	return (0);
