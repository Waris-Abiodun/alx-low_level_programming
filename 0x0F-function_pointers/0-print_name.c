#include "function_pointers.h"

/**
 * print_name - fuction pointer that print name
 * @name: parameter to be pass that will store name
 * @f: the function pointer
 */
void print_name(char *name, void (*f)(char *));
{
	f(name);
}
