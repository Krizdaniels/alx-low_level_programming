#include "search_algos.h"

/**
  * binary_search_recursive - It Searches recursively for value in a sorted
  *                           array of integers using binary search.
  * @array: Pointer to first element of the [sub]array to search.
  * @left: Starts index of the [sub]array to search.
  * @right: Ending index of the [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}

/**
  * binary_search - It searches for value in a sorted array
  *                 of integers using binary search.
  * @array: Pointer to the first element of array to search.
  * @size: Numbers of elements in the array.
  * @value: Values to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
