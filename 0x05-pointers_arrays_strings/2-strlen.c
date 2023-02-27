#include "main.h"
#include <stddef.h>

/**
 *_strlen - Returns the length of the array.
 * @str: string.
 *
 * Return: length.
 */

size_t _strleni(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}
