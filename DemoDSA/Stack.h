#pragma once
#include <iostream>
#include "stdafx.h"
using namespace std;
#define SIZE 10
template<class T>
class createStack
{
	int top = -1; //when stack is empty

public:
	createStack() {};
	~createStack() {};
	T array[SIZE];
	void push(T x);
	void pop();
	void showTop();
	void peek();
	bool isEmpty();
	bool isFull();
	void Stack();

};

template<class T>
void createStack<T>::push(T x)
{
	//add to last
	if (top == SIZE - 1)
	{
		cout << "Stack is full\n";
	}
	else
	{
		top++;
		array[top] = x;
	}
}



template<class T>
void createStack<T>::pop()
{
	//display top
	cout << "the popped item is :" << array[top] << "\n";
	//delete first
	if (top == -1)
	{
		cout << "Stack is empty\n";

	}
	else
	{
		top--;

	}
}

template<class T>
void createStack<T>::showTop()
{
	//print top
	if (top == -1)
	{
		cout << "Stack is empty\n";

	}
	else
	{
		cout << "Top is: " << array[top] << "\n";
	}
}
template<class T>
bool createStack<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template<class T>
bool createStack<T>::isFull()
{
	if (top == SIZE)
		return true;
	else
		return false;
}

template<class T>
void createStack<T>::peek()
{
	if (isEmpty())
	{
		cout << "Stack is empty \n";
	}
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << "\n" << array[i] << "\n";
		}
	}
}

template<class T>
void createStack<T>::Stack()
{

	createStack<T> s;
	float value;

	int choice, flag = 1;

	while (flag == 1)
	{
		cout << "\n Enter Choice: \n 1.Push 2.Pop 3.ShowTop 4.Peek 5.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:  cout << "Enter Value: \n";
			cin >> value;
			s.push(value);
			break;

		case 2: s.pop();
			break;

		case 3: s.showTop();
			break;

		case 4: s.peek();
			break;

		case 5: flag = 0;
			break;
		}
	}

}

