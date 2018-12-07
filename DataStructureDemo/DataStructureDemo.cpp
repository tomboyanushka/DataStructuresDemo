// DataStructureDemo.cpp : Defines the entry point for the console application.
//To DO : https://hackernoon.com/50-data-structure-and-algorithms-interview-questions-for-programmers-b4b1ac61f5b0 
//https://www.geeksforgeeks.org/commonly-asked-data-structure-interview-questions-set-1/
//
#pragma once
#include "createStack.h"
#include <iostream>
#include <sstream>
#include "DataStructureDemo.h"


#define SIZE 10
using namespace std;


DataStructureDemo demo;


void DataStructureDemo::DoStuff()
{
	int value;
	cout << "Enter operation to be performed: 1. Stack 2. Queue 3. LinkedList 4. HashTable 5.Binary Search \n";
	cin >> value;

	switch (value)
	{
	case 1: demo.stackObj.Stack();
		break;
	case 2: demo.queueObj.Queue();
		break;

	case 3: demo.list.LinkedList();
		break;

	case 4: demo.hashMap.HashTable();
		break;

	case 5: demo.bs.runBinarySearch();
		break;

	default: cout << "Enter value from options provided \n";
	}

}

void printSecondMinimum(int arr[], int size)
{
	int first, second;
	first = second = INT_MAX;
	if (size < 2)
	{
		cout << "Need more elements";
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if (arr[i] < second && arr[i] != first)
		{
			second = arr[i];
		}

	}
	cout << "Second minimum is " << second;
}

int firstNonRepeating(int arr[], int size)
{
	
	for (int i = 0; i < size; ++i)
	{
		int j;
		for (j = 0; j < size; ++j)
		{
			if (i != j && arr[i] == arr[j])
			{
				break;
			}
			
		}
		if (j == size)
		{
			return arr[i];
		}
		
		
	}
	return -1;

}

int findOddOccuringNumer(int arr[], int size)
{
	int res = 0, i;
	for (i = 0; i < size; ++i)
	{
		res ^= arr[i];

	}
	return res;
}

int main()
{
	//unsigned int x;
	//std::stringstream ss;
	//ss << std::hex << "fffefffe";
	//ss >> x;
	//std::cout << static_cast<int>(x) << std::endl;

	//std::string s = "0xfffefffe";
	//unsigned int y = std::stoul(s, nullptr, 16);
	//cout << static_cast<int>(y) << std::endl;
	//int arr[] = { 4, 4, 22, 24, 22, 5, 5 };
	//int size = sizeof(arr) / sizeof(int);
	////printSecondMinimum(arr, size);
	//cout << firstNonRepeating(arr, size) << "\n";
	//cout << findOddOccuringNumer(arr, size);


	//unsigned int n = 1;
	//char* c = (char*)&n;
	//if (*c)
	//	cout << "little endian";
	//else
	//	cout << "big endian";


    return 0;
}



