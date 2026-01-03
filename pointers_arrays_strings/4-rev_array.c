#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reversing the content of an array of an integers
 * @a: pointer of the array of an integer
 * @n: variable to an integer
 *
 * Return: 1
 */

 void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		a[start] = temp;
		a[end] =  a[start];
		temp = a[end];

		start++;
		end--;

	}
}
