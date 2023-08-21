#include "main.h"
#include "stdio.h"

/**
  * print_str - prints string
  * @str: pointer to char
  * @j: int number
  * @count: int counter
  *
  * Return: void
  */
void print_str(char *str, unsigned int j, unsigned int count)
{
	if (str != NULL)
	{
		while (str[j])
		{
			_putchar(str[j]);
			j++;
			count++;
		}
	}
}
