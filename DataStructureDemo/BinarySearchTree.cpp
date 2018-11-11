#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
	root = nullptr;
}

BinarySearchTree::~BinarySearchTree()
{
	destroyTree();
}

void BinarySearchTree::destroyTree(BTNode* leaf)
{
	if (leaf != nullptr)
	{
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
}