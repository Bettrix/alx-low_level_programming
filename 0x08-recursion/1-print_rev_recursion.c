#include "main.h"
/*
 * 1-print_rev_recursion.c- function that prints a string in reverse.
 *
 * Return: always void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)/*if *s points to a null character*/
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
