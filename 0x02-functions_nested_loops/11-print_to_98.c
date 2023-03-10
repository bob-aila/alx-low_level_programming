#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               ordered separated by a comma then a space.
 * @n: The counting start at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

