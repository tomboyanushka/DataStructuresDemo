#pragma once
#include <iostream>

using namespace std;
struct Node
{
	int data;
	Node* next;
};

class createLinkedList
{
	Node* root;
	Node* rear;
	

public:
	
	createLinkedList() 
	{
		root = NULL;
		rear = NULL;
	};
	~createLinkedList() {};


	void append(int data);
	void prepend(int data);
	void remove(int data);
	void showList();
	void LinkedList();
	int length();
	void printMiddle();
	void swapNodes(int x, int y);
	void reverseList();
	int detectLoop(Node* list);
};

