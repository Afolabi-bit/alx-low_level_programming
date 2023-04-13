#include "search_algos.h"
/**
 * linear_search - searches value in an array of ints with
 * linear search algorithm
 * @array: pointer array to search
 * @size: number of elements in array
 * @value: search item
 * Return: index where value is located,
 * otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t j;

if (array == NULL)
return (-1);

for (j = 0; j < size; j++)
{
printf("Value checked array[%li] = [%i]\n", j, array[j]);

if (array[j] == value)
return (j);
}
return (-1);
}
