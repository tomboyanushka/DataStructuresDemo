
#include "createLinkedList.h"


void createLinkedList::append(int data)
{

	if (root == NULL)
	{
		root = new Node;
		root->data = data;
		rear = root;
		rear->next = NULL;
	}
	else
	{
		rear->next = new Node;
		rear = rear->next;
		rear->next = NULL;
		rear->data = data;
	}
	showList();
	
}

void createLinkedList::prepend(int data)
{
	if (root == NULL)
	{
		append(data);
	}
	else
	{
		Node* temp = new Node;
		temp->next = root;
		temp->data = data;
		root = temp;

		showList();
	}


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
		if (current->data == data)
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
		cout << temp->data << endl;
		temp = temp->next;
	}
}

int createLinkedList::length()
{

	int counter = 0;
	if (root != NULL)
	{
		Node* temp = root;
		while (temp != 0)
		{
			temp = temp->next;
			counter++;
		}
	}
	cout << "The length of this list is " << counter << endl;
	return counter;
}

void createLinkedList::printMiddle()
{
	int middle = 0;
	int counter = 0;
	int currentCounter = 0;
	if (root != NULL)
	{
		counter = length();
		middle = counter / 2;
	}
	Node* temp = root;
	while (temp != 0)
	{
		temp = temp->next;
		currentCounter++;
		if (currentCounter == middle)
		{
			cout << "Middle node is: " << temp->data << endl;
		}
	}


}

void createLinkedList::swapNodes(int x, int y)
{
	cout << "Before swapping \n";
	showList();
	Node* previousX = NULL;
	Node* currentX = root;
	Node* previousY = NULL;
	Node* currentY = root;
	if (x == y) //if it is the same element
		return;
	while (currentX->data != x)
	{
		previousX = currentX;
		currentX = currentX->next;
	}
	while (currentY->data != y)
	{
		previousY = currentY;
		currentY = currentY->next;
	}
	if (currentX == NULL || currentY == NULL)
		return;

	//if x is not head
	if (previousX != NULL)
	{
		previousX->next = currentY;
	}
	else
		root = currentY;
	//if y is not head
	if (previousY != NULL)
	{
		previousY->next = currentX;
	}
	else
		root = currentX;

	//now swapping their nexts
	Node* temp = currentY->next;
	currentY->next = currentX->next;
	currentX->next = temp;
	cout << "After swapping \n";
	showList();
}

void createLinkedList::reverseList()
{
	cout << "Before reversing \n";
	showList();

	if (root != NULL)
	{
		Node* previous = NULL;
		Node* current = root;
		Node* next = NULL;
		while (current != NULL)
		{
			next = current->next;
			current->next = previous;
			previous = current;
			current = next;
		}
		root = previous;
		cout << "After reversing \n";
		showList();
	}

}

int createLinkedList::detectLoop(Node* list)
{

	
	Node* slowPointer = list;
	Node* fastPointer = list;

	while (slowPointer && fastPointer && fastPointer->next)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next->next;
		if (slowPointer == fastPointer)
		{
			cout << "Loop found";
			return 1;
		}
	}
	return 0;
}

int createLinkedList::sumOfNodes()
{
	Node* ptr = root;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->data;
		ptr = ptr->next;
	}

	return sum;
}

void createLinkedList::LinkedList()
{
	createLinkedList list;
	int choice, value, swap1, swap2;
	Node* head;
	int flag = 1;
	while (flag == 1)
	{
		cout << "\n Enter Choice: \n 1.Append \n 2.Prepend \n 3.Remove \n 4.Show List \n 5.Show Length " 
			"\n 6.Print Middle Node \n 7.Swap Nodes \n 8.Reverse List \n 9.Detect Loop \n 10.Sum of Nodes \n 0.Exit---->  ";
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

		case 5: list.length();
			break;

		case 6: list.printMiddle();
			break;

		case 7: cout << "Enter nodes to be swapped ----->  ";
				cin >> swap1;
				cin >> swap2; 
				list.swapNodes(swap1, swap2);
			break;

		case 8: list.reverseList();
			break;

		case 10: cout << list.sumOfNodes();
			break;

		case 0: flag = 0;
			break;
		}
	}
}


