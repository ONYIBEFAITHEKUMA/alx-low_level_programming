

/**
 * print_name - functions that prints name
 *
 * @name: pointer to name
 *
 * @f: fuction pointer
 *
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
