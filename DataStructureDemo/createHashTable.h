#pragma once
//https://stackoverflow.com/questions/35827459/assigning-a-new-task-to-a-thread-after-the-thread-completes-in-c/35829560#35829560
//https://www.geeksforgeeks.org/implementing-hash-table-open-addressing-linear-probing-cpp/
using namespace std;

//Implementing own Hash Table with Open Addressing Linear Probing in C++
//In Open Addressing, all elements are stored in the hash table itself. 
//So at any point, size of table must be greater than or equal to total number of keys (Note that we can increase table size by copying old data if needed).

template<typename K, typename V>

class HashNode
{
public:
	V value;
	K key;

	HashNode(K key, V value)
	{
		this->value = value;
		this->key = key;
	}
};

template <typename K, typename V>
class createHashTable
{

	HashNode<K, V> **arr;
	int capacity;
	int size;
	HashNode<K, V> *dummy;
public:
	createHashTable() 
	{
		capacity = 20;
		size = 0;
		arr = new HashNode<K, V>*[capacity];

		for (int i = 0; i < capacity; ++i)
		{
			arr[i] = NULL;
		}

		//Here, to mark a node deleted we have used dummy node with key and value -1.
		//Insert can insert an item in a deleted slot, but search doesn’t stop at a deleted slot.
		dummy = new HashNode<K, V>(-1, -1);
	};

	int hashCode(K key)
	{
		return key % capacity;
	}
	~createHashTable() {};

	//insert
	//search
	//delete

	template<typename K, typename V>
	void insertNode(K key, V value)
	{
		HashNode<K, V> *temp = new HashNode<K, V>(key, value);

		int hashIndex = hashCode(key);

		//find next free space
		while (arr[hashIndex] != nullptr && arr[hashIndex]->key != key
			&& arr[hashIndex]->key != -1)
		{
			hashIndex++;
			hashIndex %= capacity;
		}

		//inc size if new node is to be inserted
		if (arr[hashIndex] == NULL || arr[hashIndex]->key == -1)
		{
			size++;
		}
		arr[hashIndex] = temp;
	}
	V deleteNode(K key)
	{
		// Apply hash function to find index for given key 
		int hashIndex = hashCode(key);

		while (arr[hashIndex] != nullptr)
		{
			//if it is found, replace with dummy
			if (arr[hashIndex]->key == key)
			{
				HashNode<K, V>* temp = arr[hashIndex];
				arr[hashIndex] = dummy;
				size--;
				return temp->value;
			}
			hashIndex++;
			hashIndex %= capacity;
		}
		return 0; //if not found
	}

	V get(K key)
	{
		int hashIndex = hashCode(key);
		int counter = 0;

		while (arr[hashIndex] != nullptr)
		{
			int counter = 0;
			if (counter > capacity)
			{
				return 0; //why are they doing this
			}
			counter++;

			if (arr[hashIndex]->key == key)
			{
				int result = arr[hashIndex]->value;
				return result;
			}
			hashIndex++;
			hashIndex %= capacity;


		}
		return 0;

	}

	//Return current size  
	int sizeofMap()
	{
		return size;
	}

	//Return true if size is 0 
	bool isEmpty()
	{
		return size == 0;
	}

	//Function to display the stored key value pairs 
	void display()
	{
		for (int i = 0; i<capacity; i++)
		{
			if (arr[i] != NULL && arr[i]->key != -1)
				cout << "key = " << arr[i]->key
				<< "  value = " << arr[i]->value << endl;
		}
	}

	int HashTable()
	{

		createHashTable<int, int> *h = new createHashTable<int, int>;
		h->insertNode(1, 1);
		h->insertNode(2, 2);
		h->insertNode(2, 3);
		h->display();
		cout << h->sizeofMap() << endl;
		cout << h->deleteNode(2) << endl;
		cout << h->sizeofMap() << endl;
		cout << h->isEmpty() << endl;
		cout << h->get(2);

		return 0;
	}
};


