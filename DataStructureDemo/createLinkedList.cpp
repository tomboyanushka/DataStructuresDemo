
#include "createLinkedList.h"


void createLinkedList::append(int data)
{

	if (root == NULL)
	{
		root = new Node;
		root->x = data;
		rear = root;
		rear->next = NULL;
	}
	else
	{
		rear->next = new Node;
		rear = rear->next;
		rear->next = NULL;
		rear->x = data;
	}
	
}

void createLinkedList::prepend(int data)
{
	Node* temp = new Node;
	temp->next = root;
	temp->x = data;
	root = temp;
}

void createLinkedList::remove(int data)
{
	Node* current = nullptr;
	Node* previous = nullptr;
	Node* temp = nullptr;
	current = root;
	while (current!= NULL)
	{
		//deleting first element
		if (current->x == data)
		{
			if (root->next == NULL)
			{
				delete root;
				root = nullptr;
			}
			else if (previous == NULL)
			{
				temp = current;
				current = current->next;
				//set root as current
				root = current;
				delete temp;
			}
			else if (current->next == NULL) // check if current->next null then set previous next as null, and delete current.
			{
				temp = previous;
				previous->next = NULL;
				delete current;
			}
			else
			{
				previous->next = current->next;
				delete current;
			}

			break;
			
		}

		//deleting somewhere in between
		else 
		{
			previous = current;
			current = current->next;
		}

	}


}

void createLinkedList::showList()
{
	Node* temp = root;
	while (temp != NULL)
	{
		cout << temp->x << endl;
		temp = temp->next;
	}
}

void createLinkedList::LinkedList()
{
	createLinkedList list;
	int choice, value;
	int flag = 1;
	while (flag == 1)
	{
		cout << "\n Enter Choice: \n 1.Append 2.Prepend 3.Remove 4.Show List 5.Exit---->  ";
		cin >> choice;
		switch (choice)
		{
		case 1:  cout << "Enter Value---->  ";
			cin >> value;
			list.append(value);
			break;

		case 2: cout << "Enter Value---->  ";
			cin >> value;
			list.prepend(value);
			break;

		case 3: cout << "Enter Value---->  ";
			cin >> value;
			list.remove(value);
			break;

		case 4: list.showList();
			break;

		case 5: flag = 0;
			break;
		}
	}
}
