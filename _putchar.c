#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 * Return: 0 on success and -1 on error and the err no is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
