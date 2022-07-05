#include "main.h"
/**
 * Main - checks for alphabetic character
 *
 * Return (1) or (0)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
