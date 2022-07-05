#include "main.h"

/**
 * 3-islower.c - check ifit is lowecase
 * @c: an imput character
 * Description: function uses putchar to print
 * Return: 1 if is lowercase or 0 if its uppercase
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
