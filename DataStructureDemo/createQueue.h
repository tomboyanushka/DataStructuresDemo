#pragma once
#define SIZE 10
using namespace std;
template<class Q>
class createQueue
{

public:
	int front = -1;
	int rear = -1;

	Q array[SIZE];
	void enqueue(Q value);
	Q dequeue();
	bool isEmpty();
	bool isFull();
	void showQueue();
	void Queue();

};

template<class Q>
void createQueue<Q>::enqueue(Q value)
{
	rear++;
	front = 0;
	array[rear] = value;
}

template<class Q>
Q createQueue<Q>::dequeue()
{
	Q q = array[front];
	if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}


	return q;
}

template<class Q>
bool createQueue<Q>::isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}

template<class Q>
bool createQueue<Q>::isFull()
{
	if (rear == SIZE - 1)
		return true;
	else
		return false;
}

template<class Q>
void createQueue<Q>::showQueue()
{
	for (int i = front; i <= rear; i++)
	{
		cout << array[i] << "  ";
		cout << "\n";
	}
}

template<class Q>
void createQueue<Q>::Queue()
{
	createQueue<Q> q;
	Q value;

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
}

