
#pragma once

#include "stdafx.h"
#include <iostream>
#include "LinkedList.h"
#include "createStack.h"
#include "createQueue.h"
#include "createLinkedList.h"


class DataStructureDemo
{
public:

	createStack<float> stackObj;
	createQueue<float> queueObj;
	createLinkedList list;

};