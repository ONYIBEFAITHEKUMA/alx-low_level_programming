
/**
 * int_index - functions that seraches for an array
 *
 * @array:array of an integer
 *
 * @size: is the number of elements in the array
 *
 * @cmp: pointers to function used to compare values
 *
 * Return: -1 if no element matches, -1 if soze is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
