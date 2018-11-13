#include "BinarySearch.h"


int BinarySearch::binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
		{
			return mid;
		}
		if (arr[mid] > x)
		{
			return binarySearch(arr, l, mid - 1, x);
		}
		else
		{
			return binarySearch(arr, mid + 1, r, x);
		}
	}

	return -1;
}

void BinarySearch::runBinarySearch()
{
	int arr[] = { 2,4,6,8,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 8;
	int result = binarySearch(arr, 0, sizeof(arr), x);
	if (result == -1)
	{
		std::cout << "Element is not present in array";
	}
	else
	{
		std::cout << "Element is present at index %d" << result;
	}
}
