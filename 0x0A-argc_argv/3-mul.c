#include <stdio.h>
#include "main.h"

/**
 * _is_digit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _digit_to_int - converts a character digit to an integer
 * @c: the character digit to convert
 * Return: the integer value of the digit
 */
int _digit_to_int(char c)
{
	return (c - '0');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (_is_digit(s[i]))
		{
			digit = _digit_to_int(s[i]);

			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;

			f = 1;

			if (!_is_digit(s[i + 1]))
				break;

			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
