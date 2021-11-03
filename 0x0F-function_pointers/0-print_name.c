/**
 * print_name - Prints a name using a given function
 * @name: Name to print
 * @f: Pointer to function to use
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
