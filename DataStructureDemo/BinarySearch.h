#pragma once
#include <iostream>
//Binary Search : Search a sorted array by repeatedly dividing the search interval in half.
//Begin with an interval covering the whole array.
//If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
//Otherwise narrow it to the upper half.Repeatedly check until the value is found or the interval is empty.
class BinarySearch
{
public:
	BinarySearch() {};
	~BinarySearch() {};

	int binarySearch(int arr[], int l, int r, int x);
	void runBinarySearch();
};

