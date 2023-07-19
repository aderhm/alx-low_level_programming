/**
 * print_name - prints a name using a function ptr.
 * @name: a name,
 * @f: a pointer to a function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
