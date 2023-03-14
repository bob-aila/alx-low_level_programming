#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character stdout
 * @c:character to print
 *
 * Return:1 On success.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

