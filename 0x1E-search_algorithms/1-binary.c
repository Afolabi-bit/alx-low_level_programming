#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 * binary search algorithm
 * @array: pointer to first element of array to search in
 * @size: num of elements in @array
 * @value: search item
 * Return: index of @value,
 * otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
int left, mid, right;
int i;

if (array == NULL)
{
return (-1);
}

left = 0;
right = size - 1;

while (left <= right)
{
mid = (left + right) / 2;

printf("Searching in array: ");

for (i = left; i <= right; i++)
printf("%i%s", array[i], i == right ? "\n" : ", ");

if (array[mid] < value)
left = mid + 1;
else if (array[mid] > value)
right = mid - 1;
else
return (mid);
}
return (-1);
}
