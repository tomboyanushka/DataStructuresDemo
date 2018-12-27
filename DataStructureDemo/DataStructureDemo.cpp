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


int LengthOfString(char input[])
{
	int length = 0;
	for (int i = 0; input[i] != '\0'; ++i)
	{
		length++;
	}
	return length;
}

int StringToNumber(char input[], int length)
{
	if (length == 0)
	{
		return input[length] - '0';
	}
	else
	{
		int a = StringToNumber(input, length - 1);
		int b = input[length] - '0';
		return a * 10 + b;
	}
}

int StringToNumber(char input[])
{
	int length = LengthOfString(input);
	return StringToNumber(input, length - 1);
}

int NonRecursiveStringToInt(char input[], int length)
{
	int result = 0;
	int mult = 1;

	for (int i = 0; i <= length; i++)
	{
		result = result * 10 + (input[i] - '0');
	}

	return result;
}


int main()
{
	char input[100];
	cout << "Enter Input " << endl;
	cin >> input;
	int length = LengthOfString(input);
	cout << "The number is " << StringToNumber(input) << endl;
	cout << "The number by method 2 is " << NonRecursiveStringToInt(input, length - 1) << endl;

    return 0;
}



