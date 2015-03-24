// author: Guchan Alkan
// date: 2015.02.20

#include <stdio.h>
#include <time.h>

void ascending(int arr[], int n)
{
	int swapped = 0;

	do
	{
		swapped = 0;
		for (int i = 1; i < n; ++i)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;

				swapped = 1;
			}
		}
	}
	while (swapped);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[1000];
	int* p = arr;
	for (int i = 0; i < 1000; ++i)
	{
		*(p + i) = 1000 - i;
	}

	ascending(arr, 1000);
}