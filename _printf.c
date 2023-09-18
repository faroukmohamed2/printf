#include "main.h"
/**
 * _printf - this is a printf function
 * @format: the string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;
	char *str;
	
	if (format[i] == '%' && !format[i + 1])
		return (-1);
	if (!format[i])
	{
		return (0);
		exit(98);
	}
	va_start(list, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(list, int));
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(list, char *);
				_putstring(str);
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'u')
			{
					_putint(va_arg(list, int));
			}
			else
			{
				_putchar(format[i + 1]);
			}
			continue;
		}
		if (format[i - 1] != '%' && format[i] != '%')
			_putchar(format[i]);
	}
	va_end(list);
	return (i - 1);
}
