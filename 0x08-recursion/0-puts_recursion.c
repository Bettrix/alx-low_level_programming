#include "main.h"
/*
* fucntion for printing a string, followed by a new line.
* using Prototype: void _puts_recursion(char *s);
*
* Return- always 0;
*
*/
void _puts_recursion(char *s)
{
	if(!*s)/*if *s points to a null character*/
	{	
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
