#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a1;
	int a2;
    /**int len;
    int len2;
    unsigned int ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;*/
    /**_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

	a1 = _printf("%s", "This sentence is retrieved from va_args!\n");
	a2 = printf("%s", "This sentence is retrieved from va_args!\n");

	printf("%i, %i\n\n", a1, a2);

    a1 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	a2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');

	printf("%i, %i\n\n", a1, a2);*/

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    a1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	a2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	_printf("Length:[%d, %i]\n", a1, a1);
    printf("Length:[%d, %i]\n", a2, a2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    /** a1 = _printf("%%\n");
	a2 = printf("%%\n");

	printf("%i, %i\n\n", a1, a2);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("%b\n", 98);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    return (0);
}
