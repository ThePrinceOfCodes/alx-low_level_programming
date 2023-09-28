#include "main.h"
#include <unistd.h>
/**
 * _putchar - ouputs charater to stdout
 * @c: The character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
