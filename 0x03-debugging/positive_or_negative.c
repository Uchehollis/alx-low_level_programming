#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @n: n is a number
 * Return: 0 on successful execution
 */

int positive_or_negative(int n)

{
if (n > 0)
{
	printf("%d is positive\n", n);
} else if (n < 0)
{
	printf("%d is negative\n", n);
}  else
{
	printf("%d is zero\n", n);
}
	return (0);

}
