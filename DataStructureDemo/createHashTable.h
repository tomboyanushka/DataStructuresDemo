#pragma once
//https://www.geeksforgeeks.org/implementing-hash-table-open-addressing-linear-probing-cpp/
using namespace std;

template<typename K, typename V>

class HashNode
{
public:
	V value;
	K key;

	HashNode(K key, V value)
	{
		this->value = value;
		this.key = key;
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

		dummy = new HashNode<K, V>(-1, -1);
	};
	~createHashTable() {};



	void insertNode(K key, V value);
	void deleteNode(K key, V value);
};

template<typename K, typename V>
inline void createHashTable<K, V>::insertNode(K key, V value)
{
}

template<typename K, typename V>
inline void createHashTable<K, V>::deleteNode(K key, V value)
{
}
