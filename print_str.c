#include "main.h"
#include "stdio.h"

/**
 * print_str - prints string
 * @str: pointer to char
 * @j: int number
 *
 * Return: void
 */
int print_str(char *str, unsigned int j)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
			len++;
		}
	}
	return (len);
}
