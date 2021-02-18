#include "holberton.h"

/**
 *reverse_array - a function that reverses two arrays
 *@a: array
 *@n: the number of elements of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}
