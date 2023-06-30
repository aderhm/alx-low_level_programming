/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array
 * @n: The number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;
	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
		i++;
	}
}
