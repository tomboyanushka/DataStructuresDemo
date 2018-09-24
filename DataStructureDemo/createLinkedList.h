#pragma once
#include <iostream>

using namespace std;
struct Node
{
	int x;
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
};

