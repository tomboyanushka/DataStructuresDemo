#pragma once

struct BTNode
{
	int keyValue;
	BTNode* left;
	BTNode* right;
};
class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();

	void insert(int key);
	BTNode* search(int key);
	void destroyTree();

private:
	void destroyTree(BTNode* leaf);
	void insert(int key, BTNode* leaf);
	BTNode* search(int key, BTNode* leaf);

	BTNode* root;
};

