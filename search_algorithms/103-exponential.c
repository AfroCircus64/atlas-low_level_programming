#include "search_algos.h"

int binary_search_helper(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (binary_search_helper(array, left, right, value));
}


/**
 * binary_search_helper - Performs binary search within a specific range
 *
 * @array: A pointer to the first element of the array to search in.
 * @left: The starting index of the range.
 * @right: The ending index of the range.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
