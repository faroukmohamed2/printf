#include "main.h"
int _putint(int x)
{
    int y, i, temp, j = 0;
    char c;

    temp = x;
    if (temp < 0)
    {
        _putchar('-');
        temp = -1 * temp;
        x = -1 * x;
    }
    for (i = 1; x > 1; i *= 10)
    {
        x = x / 10;
    }
    while (i > 0)
    {
        y = temp / i;
        temp = temp % i;
        c = y + '0';
        _putchar(c);
        i /= 10;
	j++;
    }
    return (j);
}

