#include "main.h"
#include <unistd.h>

/**
  * _putchar - prints character
  * @c: caracter to print
  *
  * Return: 1 if success and -1 if not
  */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
