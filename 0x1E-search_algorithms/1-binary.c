#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * If value is not present in array or if array is NULL,
 * your function must return -1
 *
 * Return: the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
    size_t start, end;

    if (!array || size <= 0)
        return (-1);

    start = 0;
    end = size - 1;
    return (b_search(array, start, end, value));
}

/**
 * b_search - searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @start: is the element to start with
 * @end: is the element to end with
 * @value: is the value to search for
 *
 * if value not found return -1
 *
 * Return: the first index where value is located
*/
int b_search(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    i = start;
    if (start <= end)
    {
        printf("Searching in array: ");
        for (i = start; i <= end; i++)
        {
          printf(" %d", array[i]);
          if (i != end)
            printf(",");
        }
        printf("\n");

        mid = start + ((end - start) / 2);
        if (array[mid] == value)
          return (mid);
       else if (array[mid] > value)
         return (b_search(array, start, mid, value));
        else
         return (b_search(array, mid + 1, end, value));
    }
    return (-1);
}
