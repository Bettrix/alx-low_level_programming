#include "main.h"
/*
*  _puts_recursion - puts a string to stdout recursively
*
*  @s: the string to output to stdout
*
* Return: always void
*/
void _puts_recursion(char *s)
{
	if (!*s)/*if *s points to a null character*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
