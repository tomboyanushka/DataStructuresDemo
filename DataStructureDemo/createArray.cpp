#include "createArray.h"



createArray::createArray()
{
}


createArray::~createArray()
{
}

void createArray::FindSubstring()
{
	char A[] = "madmkjokjikanmadmanmadmanmadmanmadman";
	char B[] = "man";
	int BCount = sizeof(B) / sizeof(char) - 1;
	int ACount = sizeof(A) / sizeof(char) - 1;
	int count = 0;
	for (int i = 0; i < ACount; ++i)
	{
		if (A[i] == B[0])
		{
			bool isMatched = true;
			for (int j = 1; j < BCount; ++j)
			{
				if (A[i + j] != B[j])
				{
					isMatched = false;
					break;
				}
			}
			if (isMatched)
			{
				count++;
			}
		}
	}
	cout << count << "\n";
}
