#include "main.h"
/**
 * _printf - this is a printf function
 * @format: the string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0, len1 = 0, len2 = 0, len3 = 0, count = 0;
	va_list list;
	char *str;
	
	if (format[i] == '%' && !format[i + 1])
		return (-1);
	va_start(list, format);
	for (; format[i] && format; i++)
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
				len2++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(list, char *);
				len1 += _putstring(str);
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'u')
			{
					len3 += _putint(va_arg(list, int));
			}
			else
			{
				_putchar(format[i + 1]);
			}
			count++;
			continue;
		}
		if (format[i - 1] != '%' && format[i] != '%')
			_putchar(format[i]);
		len++;
	}
	va_end(list);
	return (len + len1 + len2 + len3 - count);

}
