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

int LengthOfString(const char* pMove)
{
	int i = 0;
	while (pMove[i] != '\0')
	{
		i++;
	}
	return i;
}

bool IsInAlphabetRange(char a)
{
	if (a < 'a' || a > 'h')
	{
		return false;
	}
	return true;
}

bool IsInNumericalRange(char num)
{
	if (num < '1' || num > '8')
	{
		return false;
	}

	return true;
}

int CalcAbs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return n;
}

bool isValidBishopMove(const char* pMove)
{
	//conditions where input is invalid
	//length of string == 4
	//assuming Bishops cannot be promoted, anything more than 4 characters would be invalid
	if (LengthOfString(pMove) != 4)
	{
		return false;
	}

	 if(!IsInAlphabetRange(pMove[0]) || !IsInAlphabetRange(pMove[2]) || !IsInNumericalRange(pMove[1]) || !IsInNumericalRange(pMove[3]))
	{
		return false;
	}
	
	int a = CalcAbs(pMove[0] - pMove[2]);
	int b = CalcAbs(pMove[1] - pMove[3]);
	
	//if the squares are diagonal
	//a is always equal to b
	//if a or b is zero, it is the same square. I am assuming this move is invalid.
	if (a == b && a!=0 && b!=0) 
	{
		return true;
	}

	return false;
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


	cout << LengthOfString("c4g8N") << endl;
	cout << IsInAlphabetRange('a') << endl;
	cout << IsInNumericalRange('10') << endl;
	cout << CalcAbs(-2) << endl;
	cout << isValidBishopMove("c") << endl;
	cout << isValidBishopMove("a8h1") << endl;
	cout << isValidBishopMove("a1h8") << endl;
	cout << isValidBishopMove("d2g4") << endl;
	cout << isValidBishopMove("d2d2") << endl;

    return 0;
}



