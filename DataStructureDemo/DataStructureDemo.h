
#pragma once

#include "stdafx.h"
#include <iostream>
#include "createStack.h"
#include "createQueue.h"
#include "createLinkedList.h"
#include "createHashTable.h"
#include "BinarySearch.h"



class DataStructureDemo
{
public:

	createStack<float> stackObj;
	createQueue<float> queueObj;
	createLinkedList list;
	createHashTable<int, int> hashMap;
	BinarySearch bs;
	void DoStuff();

};