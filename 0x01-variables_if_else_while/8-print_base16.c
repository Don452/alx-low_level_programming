#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int c;

	int d;

	c = 0;
	d = 'a';
	while
		(c <= 16) {
			putchar(c + '0');
			c++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
