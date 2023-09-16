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
	
	if (!format)
		return (i);
	va_start(list, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(list, int));
			if (format[i + 1] == 's')
			{
				str = va_arg(list, char *);
				_putstring(str);
			}
			continue;
		}
		if (format[i - 1] != '%')
			_putchar(format[i]);
	}
	va_end(list);
	return (i);
}
