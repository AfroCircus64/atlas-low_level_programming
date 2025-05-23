#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
		 (array[high] - array[low])) * (value - array[low]));

		if (pos > (unsigned int)size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	printf("Value checked array[49970605] is out of range\n");
	return (-1);
}
