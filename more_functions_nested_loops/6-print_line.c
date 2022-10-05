#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: line lenght (times '_' is printed).
 */

void print_line(int n)
{
	int i; /*FOR index*/

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}