#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @*str: input string to print.
 * @s: input string to print.
 */
void print_rev(char *s)
{
		int i;

		while (s[i] != '\0')
		{
			i++;
		}
			i--;
		while (s[i] != '\0')
		{
			_putchar(s[i--]);
		}
			_putchar('\n');
}
