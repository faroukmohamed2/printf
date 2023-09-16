#include "main.h"
int _printf(const char *format, ...)
{
    int i = 0;
    if (!format)
        exit(98);
    for (; format[i] != '\0'; i++)
    {
        _putchar(format[i]);
    }
    return (0);
}
