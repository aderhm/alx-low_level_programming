/**
 * op_add - adds two numbers
 * @a: the first number,
 * @b: the second number.
 *
 * Return: result of the operation.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two numbers
 * @a: the first number,
 * @b: the second number.
 *
 * Return: result of the operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mults two numbers
 * @a: the first number,
 * @b: the second number.
 *
 * Return: result of the operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first number,
 * @b: the second number.
 *
 * Return: result of the operation.
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (100);

	return (a / b);
}

/**
 * op_mod - remainds two numbers
 * @a: the first number,
 * @b: the second number.
 *
 * Return: result of the operation.
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (100);

	return (a % b);
}
