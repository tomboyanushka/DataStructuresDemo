// DataStructureDemo.cpp : Defines the entry point for the console application.
//
#pragma once
#include "createStack.h"
#include <iostream>
#include "DataStructureDemo.h"


#define SIZE 10
using namespace std;

DataStructureDemo demo;

int main()
{
	//int value;
	//cout << "Enter operation to be performed: 1. Stack 2. Queue 3. LinkedList \n";
	//cin >> value;

	//switch (value)
	//{
	//case 1: demo.stackObj.Stack();
	//	break;
	//case 2: demo.queueObj.Queue();
	//	break;

	//case 3: demo.list.LinkedList();
	//	break;

	//case 4: demo.hashMap.HashTable();
	//	break;

	//	default: cout << "Enter value from options provided \n";
	//}
	demo.bs.runBinarySearch();

    return 0;
}

