// DataStructureDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define SIZE 10
using namespace std;

template<class T>
class Stack
{
	int top = -1; //when stack is empty

public:

	T array[SIZE];
	void push(T x);
	void pop();
	void showTop();
	void peek();
	bool isEmpty();
	bool isFull();

};

template<class T>
void Stack<T>::push(T x)
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
void Stack<T>::pop()
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
void Stack<T>::showTop()
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
bool Stack<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

template<class T>
bool Stack<T>::isFull()
{
	if (top == SIZE)
		return true;
	else
		return false;
}

template<class T>
void Stack<T>::peek()
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

int createStack()
{

	Stack<float> s;
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

	return 0;
}

template<class T>
class Queue
{

public:
	int front = -1;
	int rear = -1;

	T array[SIZE];
	void enqueue(T value);
	T dequeue();
	bool isEmpty();
	bool isFull();
	void showQueue();

};




template<class T>
void Queue<T>::enqueue(T value)
{

	rear++;
	front = 0;
	array[rear] = value;

}

template<class T>
T Queue<T>::dequeue()
{
	T t = array[front];
	if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}


	return t;

}


template<class T>
bool Queue<T>::isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}

template<class T>
bool Queue<T>::isFull()
{
	if (rear == SIZE - 1)
		return true;
	else
		return false;
}

template<class T>
void Queue<T>::showQueue()
{
	for (int i = front; i <= rear; i++)
	{
		cout << array[i] << "  ";
		cout << "\n";
	}
}


int createQueue()
{
	Queue<double> q;
	double value;

	int choice, flag = 1;

	while (flag == 1)
	{
		cout << "Enter choice : \n" << "\n 1. Enqueue 2. Dequeue  3. Show Queue 4. Exit \n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (q.isFull())
				cout << "Queue is full \n";
			else
			{
				cout << "Enter value \n";
				cin >> value;
				q.enqueue(value);
			}
			break;

		case 2:
			if (q.isEmpty())
				cout << "Queue is empty \n";
			else
			{
				cout << "Popped element is " << q.dequeue() << "\n";
			}

			break;

		case 3:
			if (q.isEmpty())
				cout << "Queue is empty \n";
			else
				q.showQueue();
			break;

		case 4: flag = 0;
			break;
		}
	}

	return 0;
}


int main()
{
	int value;
	cout << "Enter operation to be performed: 1. Stack 2. Queue \n";
	cin >> value;

	switch (value)
	{
	case 1: createStack();
		break;
	case 2: createQueue();
		break;
	default: cout << "Enter value from options provided \n";
	}
    return 0;
}

