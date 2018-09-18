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

int main()
{
	node *root;
	node *conductor;

	root = new node;
	root->next = 0;

	root->x = 5;
}
