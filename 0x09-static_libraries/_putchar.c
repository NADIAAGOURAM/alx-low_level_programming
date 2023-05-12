#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 *
 * Return 1 on success
 * On error -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
