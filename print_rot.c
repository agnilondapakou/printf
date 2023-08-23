#include "main.h"

/**
 * print_rot - prints string in rot13
 * @s: string
 * Return: number of characters printed
 */
int print_rot(char *s)
{
	int count = 0;
	int i = 0;
	int j = 0;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot[j]);
				count++;
				break;
			}
			j++;
		}
		if (alpha[j] == '\0')
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
