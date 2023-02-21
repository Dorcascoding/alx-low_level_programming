#include <unistd.h>
/**
 * _putchar -writes the charactr c to stdout
 * @c: The character to print 
 * Return: on success to 1.
 * on error, -1 is required, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

