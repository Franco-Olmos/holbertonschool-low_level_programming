#include "main.h"

/**
 * main - 7mainc
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
