#include "LinkedList.h"



struct node 
{
	int x;
	node *next;
};

LinkedList::LinkedList()
{
}

LinkedList::~LinkedList()
{
}

int createLinkedList()
{
	node* root;
	node* temp;

	root = new node;
	root->next = 0;

	root->x = 5;

	temp = root;
	if (temp != 0)
	{
		while (temp->next != 0)
		{
			std::cout << temp->x;
			temp = temp->next;
		}

		temp->next = new node;
		temp = temp->next;
		temp->next = nullptr;
		(*temp).x = 12;  //pointer dereferencing

	}
}
