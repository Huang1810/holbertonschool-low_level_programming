#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: The name to prints
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
