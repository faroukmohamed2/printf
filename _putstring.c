#include "main.h"
void _putstring(char *c)
{
	int j = 0;
	for (; c[j] != '\0'; j++)
	{
		_putchar(c[j]);
	}
}
