// DataStructureDemo.cpp : Defines the entry point for the console application.
//To DO : https://hackernoon.com/50-data-structure-and-algorithms-interview-questions-for-programmers-b4b1ac61f5b0 
//https://www.geeksforgeeks.org/commonly-asked-data-structure-interview-questions-set-1/
//
#pragma once
#include "createStack.h"
#include <iostream>
#include "DataStructureDemo.h"


#define SIZE 10
using namespace std;


DataStructureDemo demo;

class Test
{
	virtual void Test1() {};
	virtual void Test2() {};
	float d = 5.6f;

};

Test t;
int main()
{
	char A[] = "madmkjokjikanmadmanmadmanmadmanmadman";
	char B[] = "man";
	int BCount = sizeof(B) / sizeof(char) - 1;
	int ACount = sizeof(A) / sizeof(char) - 1;
	int count = 0;
	for (int i = 0; i < ACount; ++i)
	{
		if (A[i] == B[0])
		{
			bool isMatched = true;
			for (int j = 1; j < BCount; ++j)
			{
				if (A[i + j] != B[j])
				{
					isMatched = false;
					break;
				}
			}
			if (isMatched)
			{
				count++;
			}
		}
	}
	cout << count << "\n";
	//cout << sizeof(float) << "\n";
	//cout << sizeof(t);
	//demo.DoStuff();
    return 0;
}

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
